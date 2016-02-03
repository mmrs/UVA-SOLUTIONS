#include<stdio.h>
#include<vector>
#include<algorithm>
#include<map>
#include<cstring>
#include<iostream>
#include<set>
#include<iterator>
#define sz 2004
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
struct edgest
{
    string a,b;
    int c;
    edgest(string e,string f,int cost)
    {
        a=e;
        b=f;
        c=cost;
    }
};

vector<edge>vec;
vector<edgest>temp;
set<string>stt;
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
map<string,int>mps;
map<int,string>mpi;
void clearall(void)
{
    vec.clear();
    temp.clear();
    mps.clear();
    mpi.clear();
    stt.clear();

}
int main()
{
  //  freopen("in.txt","r",stdin);
    int tst,t,i,j,f,k,c,ansi,cs;
    char aa[50],bb[50];
    string ts,fs;
    scanf("%d",&tst);

    for(cs=1; cs<=tst; cs++)
    {
        scanf("\n");
        scanf("%d",&n);
        scanf("%d",&e);
        ini();
        clearall();
        for(j=0; j<e; j++)
        {
            scanf("%s %s %d",aa,bb,&c);
            ts=aa;
            fs=bb;
            temp.push_back(edgest(ts,fs,c));
            stt.insert(ts);
            stt.insert(fs);
        }
        set<string>::iterator it;
        for(i=1,it=stt.begin(); it!=stt.end(); it++,i++)
        {
            mps[*it]=i;
            mpi[i]=*it;
       //     cout<<mps[*it]<<" "<<mpi[i]<<"\n";
        }
        for(i=0; i<temp.size(); i++)
        {
            string x,y;
            x=temp[i].a;
            y=temp[i].b;
           // cout<<"direct:"<<x<<" "<<y<<" "<<temp[i].c<<"\n";
         //   cout<<mps[x]<<" "<<mps[y]<<" "<<temp[i].c<<"\n";
            vec.push_back(edge(mps[x],mps[y],temp[i].c));
        }
        sort(vec.begin(),vec.end(),comp);
        ansi=mst();
        printf("%d\n",ansi);
        if(cs!=tst)printf("\n");

    }
    return 0;
}
