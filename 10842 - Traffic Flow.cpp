#include<stdio.h>
#include<vector>
#include<algorithm>                  //maximum spanning tree minimum value
#define sz 103
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
    return b.c<a.c;
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
    int cnt=100000000,i,j,x,y;
    for(i=0; i<e; i++)
    {
        x=set_find(vec[i].f);
        y=set_find(vec[i].t);
        if(x!=y)
        {
            link(x,y);
            if(cnt>vec[i].c)
                cnt=vec[i].c;

        }
    }
    return cnt;
}

void ini(void)
{
    for(int i=0; i<=n; i++)
        par[i]=i;
}
void scan__(int r)
{
    int t,f,c,i;
    for(i=0; i<r; i++)
    {
        scanf("%d %d %d",&t,&f,&c);
        vec.push_back(edge(t,f,c));
    }
}
int main()
{
    //  freopen("in.txt","r",stdin);
    int i,ans,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d",&n,&e);
        ini();
        vec.clear();
        scan__(e);
        sort(vec.begin(),vec.end(),comp);
        ans=mst();
        printf("Case #%d: %d\n",i,ans);

    }
return 0;
}
