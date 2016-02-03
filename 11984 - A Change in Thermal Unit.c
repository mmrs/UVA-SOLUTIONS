#include<stdio.h>
int main()
{
    int tc,a;
    double c,f,tmp;
    scanf("%d",&tc);
    for(a=1;a<=tc;a++)
    {
       scanf("%lf %lf",&c,&f);
       f+=((9.0/5.0)*c)+32.0;
       printf("Case %d: %.2lf\n",a,((f-32.0)*5.0)/9.0);
    }

    return 0;
}
