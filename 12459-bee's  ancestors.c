#include<stdio.h>
int main()
{
    long long int ar[81];
    int a,i;
    ar[0]=1;
    ar[1]=1;
    for(i=2;i<81;i++)
    ar[i]=ar[i-2]+ar[i-1];
    while(scanf("%d",&a)&&a)
        printf("%lld\n",ar[a]);
    return 0;
}
