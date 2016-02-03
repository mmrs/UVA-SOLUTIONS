#include<stdio.h>
#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
bool vis[26][26];
char ar[26][26];
int cnt,m,l;
queue<int>q1;
queue<int>q2;
void compr(int i,int j)
{
    if(j+1<l && ar[i][j+1]=='1' && vis[i][j+1]==0)
    {
        vis[i][j+1]=1;
        q1.push(i);
        q2.push(j+1);
        cnt++;

    }
    if(j-1>=0 && ar[i][j-1]=='1'&&vis[i][j-1]==0)
    {
        vis[i][j-1]=1;
        q1.push(i);
        q2.push(j-1);
        cnt++;
    }
    if(i-1>=0 && ar[i-1][j]=='1'&&vis[i-1][j]==0)
    {
        vis[i-1][j]=1;
        q1.push(i-1);
        q2.push(j);
        cnt++;
    }
    if(i+1<m && ar[i+1][j]=='1'&&vis[i+1][j]==0)
    {
        vis[i+1][j]=1;
        q1.push(i+1);
        q2.push(j);
        cnt++;
    }

    if(i-1>=0 && j-1>=0 && ar[i-1][j-1]=='1'&&vis[i-1][j-1]==0)
    {
        vis[i-1][j-1]=1;
        q1.push(i-1);
        q2.push(j-1);
        cnt++;
    }
    if(i+1<m && j+1<l && ar[i+1][j+1]=='1'&&vis[i+1][j+1]==0)
    {
        vis[i+1][j+1]=1;
        q1.push(i+1);
        q2.push(j+1);
        cnt++;
    }
    if(i-1>=0 && j+1<l && ar[i-1][j+1]=='1'&&vis[i-1][j+1]==0)
    {
        vis[i-1][j+1]=1;
        q1.push(i-1);
        q2.push(j+1);
        cnt++;
    }
    if(i+1<m && j-1>=0 && ar[i+1][j-1]=='1'&& vis[i+1][j-1]==0)
    {
        vis[i+1][j-1]=1;
        q1.push(i+1);
        q2.push(j-1);
        cnt++;
    }
    return;
}
int main()
{
    int t,a,b,i,j,k,n,x,y,mx;
    scanf("%d\n\n",&t);
    k=t;
    while(t--)
    {
        mx=0;
        i=0;
        while(gets(ar[i]))
            if(ar[i++][0]=='\0')break;
    m=i-1;
    memset(vis,0,sizeof(vis));
    for(i=0; i<m; i++)

    {
        l=strlen(ar[i]);
      for(j=0; ar[i][j]!='\0'; j++)
        {

            if(ar[i][j]=='1'&&vis[i][j]==0)
            {
                cnt++;
                vis[i][j]=1;
                compr(i,j);
                while(!q1.empty())
                {
                    x=q1.front();
                    y=q2.front();
                    compr(x,y);
                    q1.pop();
                    q2.pop();
                }
                if(cnt>mx)
                    mx=cnt;
                cnt=0;
            }
        }
    }

    if(t>=0 && t<k-1)cout<<endl;
    cout<<mx<<endl;
}
return 0;

}
