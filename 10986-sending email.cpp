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
#include<map>
#define inf 200000000
#define max 20010

using namespace std;

struct data
{
    int u;
    long long w;
    data () {}
    data(int a,long long b)
    {
        u=a;
        w=b;
    }
    bool operator < (const data& p) const
    {
        return p.w<w;
    }
};

int par[max];
long long dist[max];
vector<pair<int, int> >adj[max];
long long  dijkstra(int start,int desti,int end)
{

    for(int i=0; i<=end; i++)
        dist[i]=inf;
    memset(par,-1,sizeof(par));
    dist[start]=0;
    priority_queue<data>q;
    q.push(data(start,0));

    while(!q.empty())
    {
        int u=q.top().u;
        long long w=q.top().w;
        q.pop();
        if(u==desti)
            return(dist[desti]);
        if(dist[u]<w)
            continue;
        for(int i=0; i<(int)adj[u].size(); i++)
        {
            int v=adj[u][i].first;
            long long  wsec=adj[u][i].second;
            if(dist[v]<=w+wsec)
                continue;
            par[v]=u;
            dist[v]=w+wsec;
            q.push(data(v,dist[v]));
        }
    }
    return inf;
}
//void display(int s,int t)
//    {
//        if(t==s) return;
//        display(s,par[t]);
//        ans.push_back(t);
//        // printf(" %d ",t);
//    }
int main()

{

    //freopen("in.txt","r",stdin);
    int i,j,k,v,e,u1,u2,w,test,bb,end,start;
    scanf("%d",&test);
    for(bb=1; bb<=test; bb++)
    {
        scanf("%d %d %d %d",&v,&e,&start,&end);

        for(i=0; i<=v; i++)
            adj[i].clear();
        for(i=0; i<e; i++)
        {
            scanf("%d %d %d",&u1,&u2,&w);
            adj[u1].push_back(make_pair(u2,w));
            adj[u2].push_back(make_pair(u1,w));
        }
        long long res=dijkstra(start,end,v);
        if(res==inf)
            printf("Case #%d: unreachable\n",bb);
        else
            printf("Case #%d: %d\n",bb,res);

    }


    return 0;

}

