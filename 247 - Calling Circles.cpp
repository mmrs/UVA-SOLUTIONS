#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<vector>
#include<iostream>
#include<map>
#include<set>
#define sz 27
using namespace std;


struct node
{
    int nd,st,ed;
};
struct con
{
    string a;
    string b;
    con(string c,string d)
    {
        a=c;
        b=d;
    }
};
vector<con>ves;
node data[sz];
bool flag[sz];
int n,e,tag;
vector<int>vec[sz];
vector<int>rev[sz];

map<string,int>mps;
map<int,string>mpi;
set<string>st;
bool dfs2check;

void dfs(int i)
{
    if(flag[i]==0)
    {
        data[i].nd=i;
        data[i].st= ++tag;
        flag[i]=1;

    }

    for(int j=0; j<vec[i].size(); j++)
    {
        if(flag[vec[i][j]]==0)
            dfs(vec[i][j]);

    }
    data[i].ed = ++tag;

}

void dfs2(int i)
{
    flag[i]=1;
    if(dfs2check==false)
        printf(", ");
    dfs2check=false;
    cout<<mpi[i];
    for(int j=0; j<rev[i].size(); j++)
    {
        if(flag[rev[i][j]]==0)
            dfs2(rev[i][j]);
    }
}
int comp(node a,node b)
{
    return a.ed>b.ed;
}
void clear_all(void)
{
    int i;
    tag=0;
    for(i=0; i<=n; i++)
    {
         vec[i].clear();
         rev[i].clear();
    }

    for(i=0; i<=n; i++)
        data[i].nd=data[i].st=data[i].ed=0;
    memset(flag,0,sizeof flag);
    mps.clear();
    mpi.clear();
    st.clear();
    ves.clear();

}
int main()
{
    // freopen("in.txt","r",stdin);
    int i,t,a,b,cnt,cs=1;
    bool check=true;
    string s1,s2;

    while(scanf("%d %d",&n,&e)==2)
    {
        if(n==0 && e==0)
            break;
        for(i=1; i<=e; i++)
        {
            cin>>s1>>s2;
            ves.push_back(con(s1,s2));
            st.insert(s1);
            st.insert(s2);
        }
        set<string>:: iterator it;
        for(it=st.begin(),i=1;it!=st.end();i++,it++)
        {
            mps[*it]=i;
            mpi[i]=*it;
     //   cout<<mps[*it]<<" "<<mpi[i]<<"\n";
        }
        for(i=0; i<e; i++)
        {
            a=mps[ves[i].a];
            b=mps[ves[i].b];
            vec[a].push_back(b);
            rev[b].push_back(a);
         //   printf("%d to %d\n",a,b);
        }
        for(i=1; i<=n; i++)
        {
            if(flag[i]==0)
                dfs(i);
        }
        sort(data,data+n+1,comp);
//        for(i=0; i<n; i++)
//            printf("%d %d %d\n",data[i].nd,data[i].st,data[i].ed);
        memset(flag,0,sizeof flag);
        cnt=0;
        if(check==false)printf("\n");
        check=false;
        printf("Calling circles for data set %d:\n",cs++);
        for(i=0; i<n; i++)
        {
            if(flag[data[i].nd]==0)
            {
                dfs2check=true;
                dfs2(data[i].nd);
                printf("\n");
                cnt++;
            }
        }
       // printf("%d\n",cnt);
        clear_all();

    }
    return 0;
}
