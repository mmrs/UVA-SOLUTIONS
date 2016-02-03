#include<stdio.h>
int main()
{
    int a,b,c,d,sum;
    while(scanf("%d",&a)==1)
    {
        sum=a;
        b=a+1;
        c=b/3;
        d=b%3;
        sum+=c;
        a=c+d;
        while(a>=3)
        {
            c=a/3;
            d=a%3;
            a=c+d;
            sum+=c;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
