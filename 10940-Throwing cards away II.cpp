#include<stdio.h>

int ar[500005];

int main()
{

    int n,i,j,k,l;
    ar[1]=1;
    ar[2]=ar[3]=2;
    ar[4]=4;
    n=2;

    for(i=4,k=4;i<=500000;k*=2)
    {
        for(n=2,j=1;j<=k && i<=500000;j++,n+=2)
            ar[++i]=n;
    }
    while(scanf("%d",&n) && n)
        printf("%d\n",ar[n]);

    return 0;
}
