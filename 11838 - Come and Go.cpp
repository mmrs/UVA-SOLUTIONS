#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<vector>
#include<iostream>
#define sz 2003
using namespace std;


struct node
{
    int nd,st,ed;
};

node data[sz];
bool flag[sz];
int n,e,tag;
vector<int>vec[sz];
vector<int>rev[sz];


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
}
int main()
{
  // freopen("in.txt","r",stdin);
    int i,t,a,b,cnt,cs,chk;

    while(scanf("%d %d",&n,&e)==2)
    {
        if(n==0 && e==0)break;
        for(i=1; i<=e; i++)
        {
            scanf("%d %d %d",&a,&b,&chk);
            if(chk==2)
            {
                vec[b].push_back(a);
                rev[a].push_back(b);
            }
            vec[a].push_back(b);
            rev[b].push_back(a);
        }
        for(i=1; i<=n; i++)
        {
            if(flag[i]==0)
                dfs(i);
        }
        sort(data,data+n+1,comp);
  //      for(i=0; i<n; i++)
    //         printf("%d %d %d\n",data[i].nd,data[i].st,data[i].ed);
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
        if(cnt==1)
        printf("%d\n",cnt);
        else printf("0\n");
        clear_all();

    }
    return 0;
}
