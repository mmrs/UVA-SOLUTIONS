#include<stdio.h>
int main()
{
    long long int a;
    while(scanf("%lld",&a)==1)
        printf("%lld\n",a*a*(a+1)*(a+1)/4);
    return 0;
}



/*prblm with power funtion..wa for 1000 as input..

#include<stdio.h>
#include<math.h>
int main()
{
    double w;
    while(scanf("%lf",&w)==1)
    {
        w=pow(w,2.0)*pow(w+1,2.0)/4.0;
        printf("%.0lf\n",w);
    }
    return 0;
}

*/
