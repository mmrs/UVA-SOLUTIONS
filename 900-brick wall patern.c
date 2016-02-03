#include<stdio.h>
long long int fib (int i)
{
    long long int a;
    if(i<=1)
        return 1;
    return(fib(i-2)+fib(i-1));
}
int main()
{
    int a;
    while(scanf("%d",&a)&&a)
    printf("%lld\n",fib(a));
    return 0;
}
