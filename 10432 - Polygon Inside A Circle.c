#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main()
{
    double a,b,btl,res;
    while(scanf("%lf%lf",&a,&b)==2)
    {
        printf("%.3lf\n",a*a*b*sin((2*PI)/b)/2);
    }
    return 0;
}
