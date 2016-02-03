#include<stdio.h>
#include<vector>
#include<algorithm>
#define sz 200005
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
int main()
{
    int t,i,j,f,c,ans,cnt,tlcost;

    while(scanf("%d %d",&n,&e)==2)
    {
        if(n==0 && e==0)
            break;
        ini();
        vec.clear();
        tlcost=0;
        for(j=0; j<e; j++)
        {
            scanf("%d %d %d",&f,&t,&c);
            tlcost+=c;
            vec.push_back(edge(f,t,c));
        }
        sort(vec.begin(),vec.end(),comp);
        ans=mst();

        printf("%d\n",tlcost-ans);

    }
    return 0;
}
