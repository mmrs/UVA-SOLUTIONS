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
#define sz  100
#define pf printf
#define sf scanf

using namespace std;

int main()

{
#ifndef ONLINE_JUDGE
//freopen("in.txt","r",stdin);
#endif
    int t,i,j;
    double money,money_sum;
    sf("%d",&t);
    for(i=1; i<=t; i++)
    {
        j=12;
        money_sum=0.0;
        while(j--)
        {
            sf("%lf",&money);
            money_sum+=money;
        }
        money_sum/=12.0;

        if(money_sum>999.99)
            pf("%d $%ld,%.2lf\n",i,(long)(money_sum/1000.0),fmod(money_sum,1000.0));
        else pf("%d $%.2lf\n",i,money_sum);

    }

    return 0;

}
