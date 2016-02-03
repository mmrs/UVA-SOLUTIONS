#include<stdio.h>
#include<string.h>
#include<queue>
#include<iostream>
#include<map>
#define sz 33
#define inf 1000
using namespace std;

int start,to,dist[sz];
bool flag[sz];
vector<int>mat[sz];

queue<int>q;
map<string,int>mps;
void bfs(void);
int main()
{
 //   freopen("in.txt","r",stdin);
    int tst,i,node,edge,query,cost;
    string s1,s2;
    scanf("%d",&tst);
    for(int cas = 1; cas<=tst; cas++)
    {
        scanf("%d %d %d",&node,&edge,&query);
        mps.clear();
        for(i=0; i<node; i++)
        {
            cin>>s1;
            mps[s1] = i;
        }
        for(i = 0; i<edge; i++)
        {
            cin>>s1>>s2;
            mat[mps[s1]].push_back(mps[s2]);
            mat[mps[s2]].push_back(mps[s1]);
        }
         if(cas==1)printf("SHIPPING ROUTES OUTPUT\n");
            printf("\nDATA SET  %d\n\n",cas);
        for(i = 0; i<query; i++)
        {
            memset(flag,0,sizeof flag);
            for(int gg = 0; gg < sz; gg++)
            {
                dist[gg] = inf;
            }
            cin>>cost>>s1>>s2;
            cost*=100;
            start=mps[s1];
            to=mps[s2];
            q.push(start);
            flag[start] =1;
            dist[start] =0;
            bfs();
            if(dist[to] == inf)
                printf("NO SHIPMENT POSSIBLE\n");
            else
            {
                printf("$%d\n",dist[to]*cost);
            }

            while(!q.empty())q.pop();
        }
        if(cas==tst)
                printf("\nEND OF OUTPUT\n");
        for(i=0; i<node; i++)
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
                dist[mat[tp][j]] = dist[tp] + 1;
             //   printf("dist from %d to %d is %d\n",tp,mat[tp][j],dist[tp]+1);
                if(mat[tp][j]==to){
                  //  printf("fouond\n");
                    return;
                }

                q.push(mat[tp][j]);
                flag[mat[tp][j]]=1;

            }
        }
    }
}
