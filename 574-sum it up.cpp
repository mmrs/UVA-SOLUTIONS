#include<stdio.h>
#include<set>
#include<vector>
#include<iterator>

using namespace std;

int ar[15];
bool taken[15];
vector<int>ans;
int vec_sum,sum,num;
set<vector<int> > st;
void backtrack(int key,int s)
{
    if(sum==s)
    {
        st.insert(ans);
        return ;
    }
    for(int i=key; i<num; i++)
    {
        ans.push_back(ar[i]);
        backtrack(i+1,s+ar[i]);
        ans.pop_back();

    }
}

int main()
{

    //freopen("in.txt","r",stdin);
    int i,j,k,l;
    while(scanf("%d %d",&sum,&num)==2)
    {

        vec_sum=0;
        st.clear();
        if(sum==0 && num==0)
            break;
        for(i=0; i<num; i++)scanf("%d",&ar[i]);
        backtrack(0,0);
        printf("Sums of %d:\n",sum);
        if(st.size()==0)
        {
            printf("NONE\n");
            continue;
        }
        set<vector<int> > :: iterator it;
        it=st.end();
        for(it--; ; it--)
        {
            vector<int> vi = *it;
            printf("%d",vi[0]);
            for(int i = 1; i<vi.size(); i++)
            {
                printf("+%d",vi[i]);
            }
            printf("\n");
            if(it==st.begin()) break;
        }
    }
    return 0;
}
