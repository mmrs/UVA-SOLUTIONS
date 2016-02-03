#include<stdio.h>
#include<vector>
#include<algorithm>
#define sz 10001
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

vector<edge>vec,ans;
int n,e,ac;
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

void mst(void)
{
    int cnt,i,j,x,y;
    for(i=0;i<e && vec[i].c<ac; i++)
    {
        x=set_find(vec[i].f);
        y=set_find(vec[i].t);
        if(x!=y)
        {
            link(x,y);
            ans.push_back(vec[i]);
        }

    }

}

void ini(void)
{
    for(int i=0; i<=n; i++)
        par[i]=i;
}
int main()
{
    int tst,t,i,j,f,k,c,ansi,cnt,cs;
    scanf("%d",&tst);
    for(cs=1; cs<=tst; cs++)
    {
        scanf("%d %d %d",&n,&e,&ac);
        ini();
        vec.clear();
        ans.clear();
        for(j=0; j<e; j++)
        {
            scanf("%d %d %d",&f,&t,&c);
            vec.push_back(edge(f,t,c));

        }
        sort(vec.begin(),vec.end(),comp);
        mst();
        ansi=0;
        cnt=0;
        for(i=0; i<ans.size(); i++)
            ansi+=ans[i].c;
        for(i=1; i<=n; i++)
            if(par[i]==i)cnt++;

        printf("Case #%d: %d %d\n",cs,ansi+(cnt*ac),cnt);

    }
    return 0;
}
