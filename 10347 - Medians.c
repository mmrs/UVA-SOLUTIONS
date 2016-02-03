#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,ans;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        d=(a+b+c)/2;
        ans=4.0/3.0*sqrt(d*(d-a)*(d-b)*(d-c));
        if(ans>0)
            printf("%.3lf\n",ans);
        else
            printf("%.3lf\n",-1.0);
    }
    return 0;
}
