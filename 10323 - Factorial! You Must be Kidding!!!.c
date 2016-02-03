#include<stdio.h>
long long int fact(int a)
{
    long long int b;

    if(a==0)
        return 1;
    b=a*fact(a-1);
    return b;
}
int main()
{
    int a;
    long long int b;
    while(scanf("%d",&a)==1)
    {
        if(a<0 && a%2==0)
            printf("Underflow!\n");
        else if(a<0 && a%2!=0)
            printf("Overflow!\n");
        else if(a>13)
            printf("Overflow!\n");
        else if(a>=0 && a<8)
            printf("Underflow!\n");
        else
        {
            b=fact(a);
            printf("%lld\n",b);
        }
    }
    return 0;
}
