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
#define sz  100
using namespace std;

int main()

{
#ifndef ONLINE_JUDGE
//freopen("H:\\C_Codes\\input.txt","r",stdin);
#endif

long long int t,i,j,m,k,div,cnt;
while(scanf("%lld",&t)&&t)
{
    div=0;
    cnt=0;
    t=llabs(t); //fabs
    m=t;
    for(i=2;i*i<=t;i++)
    {
        while(m%i==0)
        {
           if(div!=i)
            cnt++;
            div=i;
            m/=i;
        }
    }
    if(m!=1)
    {
         cnt++;
         div=llabs(m); //fabs
    }
    if(cnt>1)
        printf("%lld\n",div);
    else printf("-1\n");

}
return 0;
}
