#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;

void goDpGo(int i);
int m,n,t,dp[10000];
int main() {

//    freopen("in.txt","r",stdin);
    int need,chk,left,ans,flag;

    while(scanf("%d %d %d",&m,&n,&t)==3) {
        if(m>n)
            swap(m,n);
        memset(dp,0,sizeof dp);
        dp[m]=dp[n]=1;
        goDpGo(m);
        if(dp[t])
            printf("%d\n",dp[t]);

        else {
            flag = 0;
            for(int i=t-1; i>=0; i--) {
                if(dp[i]) {
                    flag=1;
                    printf("%d %d\n",dp[i],t-i);
                    break;
                }

            }
            if(!flag)
                printf("0 %d\n",t);
        }
    }
    return 0;
}


void  goDpGo(int i) {

    if(i>t)
        return;
    if(dp[i]) {
        if(i+m<=t)
            dp[i+m] = max(dp[i+m],dp[i]+1);
        if(i+n<=t)
            dp[i+n] = max(dp[i+n],dp[i]+1);
    }

    goDpGo(i+1);
}
