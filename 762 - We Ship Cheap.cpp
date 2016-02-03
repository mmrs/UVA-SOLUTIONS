#include<stdio.h>
#include<string.h>
#include<queue>
#include<iostream>
#include<map>
#define sz 1003
using namespace std;

int path[sz],start,to;
bool flag[sz];
vector<int>mat[sz];

queue<int>q;
map<string,int>mps;
map<int,string>mpi;
void bfs(void);
int main()
{
  //freopen("in.txt","r",stdin);
    int tst,i,j,k,nd;
    bool chk=true;
    string s1,s2;
    while(scanf("%d",&nd)!=EOF)
    {
        memset(flag,0,sizeof flag);
        memset(path,0,sizeof path);
        while(!q.empty())
            q.pop();
        mps.clear();
        mpi.clear();
        j=1;
        for(i=1; i<=nd; i++)
        {
            cin>>s1>>s2;
            if(mps[s1]==0)
            {
                mps[s1]=j;
                mpi[j++]=s1;

            }
            if(mps[s2]==0)
            {
                mps[s2]=j;
                mpi[j++]=s2;
            }
            mat[mps[s1]].push_back(mps[s2]);
            mat[mps[s2]].push_back(mps[s1]);
        }
        cin>>s1>>s2;
        if(mps[s1]==0)
        {
            mps[s1]=j;
            mpi[j++]=s1;

        }
        if(mps[s2]==0)
        {
            mps[s2]=j;
            mpi[j++]=s2;
        }
        start=mps[s1];
        to=mps[s2];
        q.push(to);
        bfs();
        flag[to]=1;
        if(chk==false)
            printf("\n");
        chk=false;
      //  for(i=1;i<8;i++) printf(" %d %d\n",i,path[i]);printf("\n");
      //  scanf("%d",&k);
      if(path[start]==0)
        printf("No route\n");
    else
    {
        while(start!=to)
        {
            cout<<mpi[start]<<" " <<mpi[path[start]]<<"\n";
            start=path[start];
        }
    }
        for(i=1; i<j; i++)
            mat[i].clear();

    }
    return 0;
}
void bfs(void)
{
    int tp,i,j;
    while(!q.empty())
    {
        tp=q.front();
        q.pop();
        for(j=0; j<mat[tp].size(); j++)
        {
            if(flag[mat[tp][j]]==0)
            {
                path[mat[tp][j]]=tp;
                if(mat[tp][j]==start)
                  return;
                q.push(mat[tp][j]);
                flag[mat[tp][j]]=1;

            }
        }
    }
}
