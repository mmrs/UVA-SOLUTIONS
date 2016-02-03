#include<stdio.h>
int main()
{
    double a,b,c,d;
    int ts;
    scanf("%d",&ts);
    while(ts--)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        d=c/(a+b);
        a=a*d+(a-b)*d;
        printf("%.0lf\n",a);
    }
    return 0;
}
