#include<stdio.h>
int main()
{
    int a,b,d,e,sum;
    while(scanf("%d %d",&a,&b)==2)
    {

        sum=a;
        d=a/b;
        e=a%b;
        sum+=d;
        while(a>=b)
        {   a=d+e;
            d=a/b;
            e=a%b;
            sum+=d;
        }
        printf("%d\n",sum);
    }
    return 0;
}
