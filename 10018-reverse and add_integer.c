#include<stdio.h>
long rev(long a);
int main()
{
    long a,rv;
    int tst,count;
    scanf("%d",&tst);
    while(tst--)
    {
        scanf("%ld",&a);
        count=0;
        do
        {   count++;
            rv=rev(a);
            a=rv+a;
            rv=rev(a);
        }
        while(rv!=a);
        printf("%d %ld\n",count,rv);
    }
    return 0;
}
long rev(long a)
{
    long rev=0;
    while(a)
    {
        rev=rev*10+a%10;
        a/=10;
    }
    return rev;
}
