#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<queue>
#include<vector>
#include<cstring>
#include<algorithm>
#include<set>
#include<sstream>
#define sz  100000

using namespace std;
vector<int>v[sz];
bool flag[sz];
int cnt;
void dfs(int i);

int main()
{
    //freopen("H:\\C_Codes\\input.txt","r",stdin);
    int t,tl,cs,i,l,x,y,st,hnd;

    scanf("%d",&t);
    while(t--)
    {
        memset(flag,0,sizeof(flag));
        scanf("%d %d %d",&tl,&cs,&hnd);
        cnt=0;
        while(cs--)
        {
            scanf("%d %d",&x,&y);
            v[x].push_back(y);
        }
        while(hnd--)
        {
            scanf("%d",&x);
            if(flag[x]==0)
            {
                cnt++;
                flag[x]=1;
            }
            dfs(x);
        }
        printf("%d\n",cnt);
        for(i=0; i<=tl; i++)
            v[i].clear();
    }
    return 0;
}
void dfs(int i)
{

   // if(flag[i]==1)
     //   return;
    int j,k,l;
    l=v[i].size();
    for(j=0; j<l; j++)
    {
        if(flag[v[i][j]]==0)
        {
            cnt++;
            //flag[i]=1;
            flag[v[i][j]]=1;
            // printf("%d\n",v[i][j]);
            dfs(v[i][j]);
        }
    }
    return;
}
