
#include<stdio.h>
#include<vector>
#include<algorithm>
#define sz 1000003
using namespace std;

struct edge
{
    int f,t,c;
    edge(int a,int b,int co)
    {
        f=a;
        t=b;
        c=co;
    }
};
vector<edge>vec;
int n,e;
int comp(edge a,edge b)
{
    return a.c<b.c;
}
int par[sz];
int set_find(int a)
{
    if(a==par[a])
        return a;
    return(par[a]=set_find(par[a]));
}
void link(int x,int y)
{
    if(x>y)
        par[y]=x;
    else par[x]=y;
}
int mst(void)
{
    int cnt=0,i,j,x,y;
    for(i=0; i<e; i++)
    {
        x=set_find(vec[i].f);
        y=set_find(vec[i].t);
        if(x!=y)
        {
            link(x,y);
            cnt+=vec[i].c;
        }
    }
    return cnt;
}

void ini(void)
{
    for(int i=0; i<=n; i++)
        par[i]=i;
}
void scan__(int n)
{
    int t,f,c,i;
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&t,&f,&c);
        vec.push_back(edge(t,f,c));
    }
}
int main()
{
  //  freopen("in.txt","r",stdin);
    int t,i,j,f,c,ans,tlcost;
    bool flag=true;
    while(scanf("%d",&n)==1)
    {
        ini();
        e=n-1;
        vec.clear();
        tlcost=0;
        for(i=0;i<e;i++)
        {
            scanf("%d %d %d",&t,&f,&c);
            tlcost+=c;
        }
        scanf("%d",&t);
        scan__(t);
        scanf("%d",&e);
        scan__(e);
        e=t+e;
        sort(vec.begin(),vec.end(),comp);
        ans=mst();
        if(!flag)printf("\n");
        flag=false;
        printf("%d\n%d\n",tlcost,ans);

    }
    return 0;
}
