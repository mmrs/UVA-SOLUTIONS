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
#include<map>
#define sz  100
using namespace std;
map<int,int>m;
vector<int>v[32];
queue<int>q;
int dis[32];
void bfs(void);
int main()
{
#ifndef ONLINE_JUDGE
    //freopen("H:\\C_Codes\\input.txt","r",stdin);
#endif
    int i,edge,a,b,strt,ttl,x,y,c,cnt,cse=1,st;
    while(scanf("%d",&edge)&&edge)
    {
        m.clear();
        c=0;
        for(i=0; i<edge; i++)
        {
            scanf("%d %d",&a,&b);
            if(m.find(a)!=m.end())
                x=m[a];
            else
            {
                m[a]=++c;
                x=c;
            }
            if(m.find(b)!=m.end())
                y=m[b];
            else
            {
                m[b]=++c;
                y=c;
            }
            //    printf("%d %d\n",x,y);
            v[x].push_back(y);
            v[y].push_back(x);
        }
        while(scanf("%d %d",&strt,&ttl)==2)
        {
            if(strt==0 && ttl==0)
                break;
                cnt=0;
            memset(dis,-1,sizeof(dis));
            st=m[strt];
            // printf("start %d\n",strt);
            dis[st]=0;
            q.push(st);
            bfs();
            // printf("\n");
            for(i=1; i<=c; i++)
            {
               // printf("%d ",dis[i]);
                if(dis[i]>ttl || dis[i]==-1)
                    cnt++;

            }

            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cse++,cnt,strt,ttl);
            // printf("\n");

        }
        for(i=1; i<=c; i++)
            v[i].clear();
    }
    return 0;
}
void bfs(void)
{
    int f;
    while(!q.empty())
    {
        f=q.front();
        //  printf("%d\n",f);
        q.pop();
        for(int j=0; j<v[f].size(); j++)
        {
            if(dis[v[f][j]]==-1)
            {
                q.push(v[f][j]);
                // printf("dis of %d is %d\n",f,dis[f]);
                dis[v[f][j]]=dis[f]+1;
            }
        }
    }
    return;
}

