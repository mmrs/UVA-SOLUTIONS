#include<stdio.h>
#include<math.h>
#define SZ 65001
#define SZ2 20000
long long int mod(long long int a,long long int b,long long int c)
{
    long long res;
    if(b==0)
        return 1;
    else if(b%2!=0)
        return((a%c)*mod(a,b-1,c))%c;
    else
    {
        res=mod(a,b/2,c);
        return (res*res)%c;
    }
}
long long intc, flag[SZ];
void sieve(void);

int main()
{
    long long int i,x,flg,s,a;
    sieve();
    while(scanf("%lld",&x)==1)
    {
        if(x==0)break;
        if(x==1)
        {
            printf("%lld is normal.\n",x);
            continue;
        }
        flg=0;

        if(flag[x]==0)
        {
            printf("%d is normal.\n",x);
            flg=1;
            continue;
        }

        else
        {
            for(i=2; i<x; i++)
            {
                if(i!=mod(i,x,x))
                {
                    flg=1;
                    break;
                }
            }
        }
        if(flg==0)
          printf("The number %lld is a Carmichael number.\n",x);
        else printf("%lld is normal.\n",x);
    }
    return 0;
}
void sieve(void)
{
    long long int i, j, add;
    flag[0] = flag[1] = 1;
    for(i = 4; i < SZ; i+=2)
        flag[i] = 1;
    for(i = 3; i < SZ; i+=2)
    {
        if(!flag[i])
        {
            if(SZ/i >= i)
            {
                add = i * 2;
                for(j = i * i; j < SZ; j += add)
                    flag[j] = 1;
            }
        }
    }
    return;
}
