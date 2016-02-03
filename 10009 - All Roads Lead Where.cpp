#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<queue>
#include<vector>
#include<cstring>
#include<algorithm>     //sort swap   min
#include<set>
#include<sstream>      //cin  cout
#include<map>
#include<utility>     // make_pair
using namespace std;

#define sz  30
#define rep(i,n) for(i=0;i<(int)n;i++)
#define sf scanf
#define pf printf
#define mem(arr,val) memset(arr,val,sizeof(arr)
#define mp make_pair
#define pb push_back
#define clr(a) memset(a,0,sizeof a)

typedef long long ll;


//int xx[] = {-1, -1, -1, 0, 0, 1, 1, 1};     //8 move
//int yy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
//int rr[]= {0,1,0,-1};
//int cc[]= {1,0,-1,0};     // 4 move
vector<int>mat[sz];
bool flag[sz];
int par[sz];
void bfs(int st,int ed);
int main()

{
#ifndef ONLINE_JUDGE
 // freopen("in.txt","r",stdin);
#endif
    int tst,edge,i,qu,l;
    char a[40],b[40];
    sf("%d",&tst);
    while(tst--)
    {
        cin>>edge>>qu;
        l=edge;
         for(i=0; i<=sz; i++)
            mat[i].clear();
        while(l--)
        {
            sf("%s %s",a,b);
            mat[a[0]-64].pb(b[0]-64);
            mat[b[0]-64].pb(a[0]-64);
        }
        while(qu--)
        {
            cin>>a>>b;
            bfs(b[0]-64,a[0]-64);
            pf("%c",a[0]);
            int s=a[0]-64;
            int e=b[0]-64;
            while(s!=e)
            {
                pf("%c",par[s]+64);
                s=par[s];
            }
            puts("");
        }
        if(tst>0)puts("");
    }
    return 0;
}
void bfs(int st,int ed)
{
    clr(flag);
    clr(par);

    queue<int>q;
    q.push(st);
    while(!q.empty())
    {
        int tp=q.front();
        q.pop();
        flag[tp]=1;
        for(int i=0; i<mat[tp].size(); i++)
        {
            if(!flag[mat[tp][i]])
            {
                q.push(mat[tp][i]);
                par[mat[tp][i]]=tp;
                if(mat[tp][i]==ed)
                    return;
            }
        }
    }
}
