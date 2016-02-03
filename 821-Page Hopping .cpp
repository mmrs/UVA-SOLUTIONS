#include<stdio.h>
#include<map>
#include<set>
#include<vector>

#define min(a,b) a>b?b:a
#define sz 101
#define inf 1<<29

using namespace std;
int dis_mat[sz][sz];
map<int,int>mp;
set<int>sst;
void ini()
{
    int i,j;
    for(i=0; i<sz; i++)
    {
        for(j=0; j<sz; j++)
        {
            dis_mat[i][j]=inf;
            if(i==j)
                dis_mat[i][j]=0;
        }
    }
}
struct bbl
{
    int a,b;
    bbl(int c,int d)
    {
        a=c;
        b=d;
    }
};
vector<bbl>vec;

void floyedwarshall(int l)
{
    int i,j,k;
    l=sst.size();
    for(k=1; k<=l; k++)
        for(i=1; i<=l; i++)
            for(j=1; j<=l; j++)
                dis_mat[i][j]=min(dis_mat[i][j],dis_mat[i][k]+dis_mat[k][j]);
}
int main()
{
    // freopen("in.txt","r",stdin);
    int a,b,totaldist,i,cs=1,j,mx,l;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0 && b==0)break;
        mx=0;
        ini();
        mp.clear();
        sst.clear();
        vec.clear();
        vec.push_back(bbl(a,b));
        sst.insert(a);
        sst.insert(b);
        while(scanf("%d %d",&a,&b)==2)
        {
            if(a==0 && b==0)
                break;
            sst.insert(a);
            sst.insert(b);
            vec.push_back(bbl(a,b));
        }

        set<int>::iterator it;
        for(i=1,it=sst.begin();it!=sst.end();it++,i++)
        {
            mp[*it]=i;
        }

        for(i=0;i<vec.size();i++)
            dis_mat[mp[vec[i].a]][mp[vec[i].b]]=1;

        l=sst.size();
        floyedwarshall(l);

        totaldist=0;
        for(i=1; i<=l; i++)
            for(j=1; j<=l; j++)
                if(dis_mat[i][j]!=inf)
                    totaldist+=dis_mat[i][j];
        //   printf("max = %d  total dist %d\n",mx,totaldist);

        printf("Case %d: average length between pages = %0.3lf clicks\n",cs++,(double)totaldist/(l*(l-1)));
    }
    return 0;
}
