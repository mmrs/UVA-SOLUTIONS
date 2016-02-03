#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,d;
    while(scanf("%lf %lf",&a,&b)==2)
    {    d=1/a;
       c=pow(b,d);

        printf("%.0lf\n",c);

    }
    return 0;
}

