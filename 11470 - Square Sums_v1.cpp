#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<queue>
#include<vector>
#include<cstring>
#include<string.h>
#include<cstring>
#include<algorithm>
#define sz  10
using namespace std;
void count(int i);
int t;
queue<int>q;
bool flag[sz][sz];
int grid[sz][sz];
int main()

{
#ifndef ONLINE_JUDGE
//freopen("H:\\C_Codes\\input.txt","r",stdin);
#endif
int i,j,val,cnt,c=1;
while(scanf("%d",&t)&&t)
{
    memset(flag,0,sizeof(flag));
    for(i=0;i<t;i++)
        for(j=0;j<t;j++)
        scanf("%d",&grid[i][j]);
        printf("Case %d:",c++);
        for(i=0;i<ceil((float)t/2);i++)
        {
            cnt=0;
            count(i);
            while(!q.empty())
            {
               val=q.front();
              // printf("%d ",val);
               cnt+=val;
               q.pop();

            }
            printf(" %d",cnt);

        }
        printf("\n");

}
return 0;
}
void count(int i)
{
    int a,b;
    for(a=i;a<t;a++)
        if(flag[i][a]==0)
    {
        q.push(grid[i][a]);
        flag[i][a]=1;
    }
        for(a=i;a<t;a++)
            if(flag[a][i]==0)
            {
              q.push(grid[a][i]);
              flag[a][i]=1;
            }
        a=t-i-1;
        for(b=0;b<t;b++)
        if(flag[a][b]==0)
    {
        q.push(grid[a][b]);
        flag[a][b]=1;
    }
    a=t-i-1;
        for(b=0;b<t;b++)
            if(flag[b][a]==0)
            {
              q.push(grid[b][a]);
              flag[b][a]=1;
            }
        return;
}
