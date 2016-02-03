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
#define sz  201
void bfs();
using namespace std;
queue<int>q;
vector<int>v[sz];
int color[sz],flag;
int main()
{
#ifndef ONLINE_JUDGE
   // freopen("H:\\C_Codes\\input.txt","r",stdin);
#endif
    int t,i,j,k,n1,n2,l,col,n,edge;
    while(scanf("%d",&n)&&n)
    {
        scanf("%d",&edge);
        memset(color,0,sizeof(color));
        flag=0;
        for(i=0; i<edge; i++)
        {
            scanf("%d %d",&n1,&n2);
            v[n1].push_back(n2);
            v[n2].push_back(n1);
        }
        color[0]=1;
        q.push(0);

        // printf("ok\n");
        //   printf("node %d col %d\n",i,color[i]);
        bfs();
        //   for(i=0; i<n; i++)
        //  printf("%d ",color[i]);
        //   cout<<endl;
        if(flag==1)
            printf("NOT BICOLORABLE.\n");
        else printf("BICOLORABLE.\n");
        for(i=0; i<=n; i++)
            v[i].clear();
             while(!q.empty())
                q.pop();
    }
    return 0;
}
void bfs()
{
    int f,i,j,l;
    while(!q.empty())
    {
        f=q.front();
        q.pop();
        l=v[f].size();
        for(i=0; i<l; i++)
        {
            if(color[v[f][i]]==0)
            {
                if(color[f]==1)
                    color[v[f][i]]=2;
                else
                    color[v[f][i]]=1;
                q.push(v[f][i]);

            }
            else if(color[v[f][i]]==color[f])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    return;
}