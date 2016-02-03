#include<stdio.h>
#include<vector>

using namespace std;

int cd[25];
int sum,n,flag,ans_sum;
vector<int>tmp,ans;

void update(void)
{
    ans.clear();
    ans_sum=0;
    for(int i=0; i<tmp.size(); i++)
    {
        ans.push_back(tmp[i]);
        ans_sum+=tmp[i];
    }
}

void call(int k,int cd_sum)
{
    for(int i=k; i<n; i++)
    {
        if(cd_sum+cd[i]<=sum)
        {
            tmp.push_back(cd[i]);
            call(i+1,cd_sum+cd[i]);
            if(cd_sum+cd[i]>=ans_sum)
                update();
            tmp.pop_back();
        }
    }
}


int main()
{
    freopen("in.txt","r",stdin);
    int i,ansi;
    while(scanf("%d %d",&sum,&n)==2)
    {
        flag=0;
        for(i=0; i<n; i++)
            scanf("%d",&cd[i]);
        call(0,0);
        ans_sum=ansi=0;
        for(i=0; i<ans.size(); i++)
        {
            printf("%d ",ans[i]);
            ansi+=ans[i];

        }
        ans.clear();
        printf("sum:%d\n",ansi);

    }
    return 0;
}
