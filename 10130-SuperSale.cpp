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
#include<utility>

using namespace std;

#define rep(j,n) for(i=j;i<=(int)n;i++)
#define sf scanf
#define pf printf
#define clr(a) memset(a,-1,sizeof(a))
#define mp make_pair
#define pb push_back
#define sz  1003


int cost[sz],weight[sz];
int per,itm,cap;
int dp[sz][33];

int calculate(int i,int w)
{
    if(i==itm)
        return 0;
    if(dp[i][w]!=-1)
        return dp[i][w];
    int p1=0,p2=0;
    if(w+weight[i]<=cap)
        p1=cost[i]+calculate(i+1,w+weight[i]);
    p2=calculate(i+1,w);
    return  dp[i][w]=max(p1,p2);
}
int main()

{
  //  freopen("in.txt","r",stdin);
    int tst,i,j,l,maax;
    sf("%d",&tst);
    while(tst--)
    {
        sf("%d",&itm);
        rep(0,itm-1)
        sf("%d %d",&cost[i],&weight[i]);
        sf("%d",&per);
        maax=0;
        rep(0,per-1)
        {
            sf("%d",&cap);
            clr(dp);
            maax+=calculate(0,0);
        }
        pf("%d\n",maax);
    }



    return 0;

}
