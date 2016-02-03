#include<stdio.h>
#include<algorithm>
#define SZ  18410000
#define SZ2 100000

int c, flag[SZ], prime[SZ2];
void sieve(void);

int main()
{
    sieve();
    int a,i;
    for(i=2;i<SZ;i++)
        if(flag[i]==0  && flag[i+2]==0)
    prime[c++]=i;
    while(scanf("%d",&a)==1)
        printf("(%d, %d)\n",prime[a-1],prime[a-1]+2);


   // for(i=0;i<c;i++)
       // printf("%d ",prime[i]);
   // printf("\n");
    return 0;

}
void sieve(void)
{
    int i, j, add;
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
