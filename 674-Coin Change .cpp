#include<stdio.h>
#include<string.h>

int coin[]= {50,25,10,5,1};
int make;
int dp[6][8500];
int call(int i,int amount)
{
     if(amount==0)
        return 1;
    if(i>=5)
        return 0;

    if(dp[i][amount]!=-1) return dp[i][amount];
    int ret1=0,ret2=0;
    if(amount-coin[i]>=0) ret1=call(i,amount-coin[i]);
    ret2=call(i+1,amount); //dont take coin i
    return dp[i][amount]=ret1+ret2;
}
int main()
{
    memset(dp,-1,sizeof dp);
    while(scanf("%d",&make)==1)
    {
        printf("%d\n",call(0,make));
    }
    return 0;
}
