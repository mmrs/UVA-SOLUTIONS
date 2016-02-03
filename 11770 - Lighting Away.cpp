#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<vector>
#include<iostream>
#define sz 10002
using namespace std;


struct node
{
    int nd,st,ed;
};

node data[sz];
bool flag[sz];
int n,e,tag;
vector<int>vec[sz];


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
    for(int j=0; j<vec[i].size(); j++)
    {
        if(flag[vec[i][j]]==0)
            dfs2(vec[i][j]);
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
        vec[i].clear();
    for(i=0; i<=n; i++)
        data[i].nd=data[i].st=data[i].ed=0;
    memset(flag,0,sizeof flag);
}
int main()
{
   // freopen("in.txt","r",stdin);
    int i,t,a,b,cnt,cs;
    scanf("%d",&t);
    for(cs=1; cs<=t; cs++)
    {
        scanf("%d %d",&n,&e);
        for(i=1; i<=e; i++)
        {
            scanf("%d %d",&a,&b);
            vec[a].push_back(b);
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
        for(i=0; i<n; i++)
        {
            if(flag[data[i].nd]==0)
            {
                dfs2(data[i].nd);
                cnt++;
            }
        }
        printf("Case %d: %d\n",cs,cnt);
        clear_all();

    }
    return 0;
}
