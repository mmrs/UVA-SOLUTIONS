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

#define sf1(a) scanf("%d",&a)
#define sf2(a,b) scanf("%d %d",&a,&b)
#define sf3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define pf printf
#define clr(arr,val) memset(arr,val,sizeof(arr))
#define mp make_pair
#define pb push_back
#define sz  100

typedef long long int ll;


/*------------------------------------------------------------------*/
int coin[]= { 1, 8, 27, 64, 125, 216, 343, 512, 729, 1000, 1331, 1728, 2197, 2744, 3375, 4096, 4913, 5832, 6859, 8000, 9261};
ll  dp[23][10003];

ll go(int i,int amnt)
{
    if(amnt==0)
        return 1;
    if(i==21)
        return 0;
    ll  &ret=dp[i][amnt];
    if(ret!=-1)
        return ret;
    ll  r=0,l=0;
    if(amnt-coin[i]>=0)
        r=go(i,amnt-coin[i]);
    l=go(i+1,amnt);

    return ret= r+l;

}

int main()
{
    int make;
    clr(dp,-1);
    while(sf1(make)==1)
    {
        pf("%lld\n",go(0,make));
    }
    return 0;
}
