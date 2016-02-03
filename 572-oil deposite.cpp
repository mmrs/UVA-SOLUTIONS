#include<stdio.h>
#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
#define SZ 105
bool vis[SZ][SZ];
char ar[SZ][SZ];
queue<int>q1;
queue<int>q2;
void mark(int i,int j)
{
    if(ar[i][j+1]=='@' && vis[i][j+1]==0)
    {
        vis[i][j+1]=1;
        q1.push(i);
        q2.push(j+1);
    }
    if(ar[i][j-1]=='@'&&vis[i][j-1]==0)
    {
        vis[i][j-1]=1;
        q1.push(i);
        q2.push(j-1);
    }
    if(ar[i-1][j]=='@'&&vis[i-1][j]==0)
    {
        vis[i-1][j]=1;
        q1.push(i-1);
        q2.push(j);
    }
    if(ar[i+1][j]=='@'&&vis[i+1][j]==0)
    {
        vis[i+1][j]=1;
        q1.push(i+1);
        q2.push(j);
    }

    if(ar[i-1][j-1]=='@'&&vis[i-1][j-1]==0)
    {
        vis[i-1][j-1]=1;
        q1.push(i-1);
        q2.push(j-1);
    }
    if(ar[i+1][j+1]=='@'&&vis[i+1][j+1]==0)
    {
        vis[i+1][j+1]=1;
        q1.push(i+1);
        q2.push(j+1);
    }
    if(ar[i-1][j+1]=='@'&&vis[i-1][j+1]==0)
    {
        vis[i-1][j+1]=1;
        q1.push(i-1);
        q2.push(j+1);
    }
    if(ar[i+1][j-1]=='@'&& vis[i+1][j-1]==0)
    {
        vis[i+1][j-1]=1;
        q1.push(i+1);
        q2.push(j-1);
    }
    return;
}
int cnt;
int main()
{
    int m,n,i,j,x,y;
    while(scanf("%d %d",&m,&n)==2)
    {
        getchar();
        if(m==0 && n==0)break;
        for(int i=1; i<=m; i++)
            gets(ar[i]);
            memset(vis,0,sizeof(vis));
        for(int i=1; i<=m; i++)
            for(int j=0; j<n; j++)
            {
                if(ar[i][j]=='@' && vis[i][j]==0)
                {
                    cnt++;
                    mark(i,j);
                    while(!q1.empty())
                    {
                        x=q1.front();
                        y=q2.front();
                        q1.pop();
                        q2.pop();
                        mark(x,y);
                    }
                }
            }
         cout<<cnt<<endl;
         cnt=0;
         while(!q1.empty())
         {
             q1.pop();
             q2.pop();
         }
    }
    return 0;
}

