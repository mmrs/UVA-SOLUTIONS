#include<stdio.h>
int main()
{
    int b,c,d,sum;
    while(scanf("%d",&b)==1)
    {
        sum=0;
        if(b==0)
            break;
        b=b+1;
        c=b/3;
        d=b%3;
        sum+=c;
        b=c+d;
        while(b>=3)
        {
            c=b/3;
            d=b%3;
            b=c+d;
            sum+=c;

        }
        printf("%d\n",sum);
    }

    return 0;
}
