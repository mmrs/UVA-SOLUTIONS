#include<stdio.h>
int main()
{
    int i,tst;
    double r,l,w,l1,l2;
    scanf("%d",&tst);
    for(i=1;i<=tst;i++)
    {
        scanf("%lf",&r);
        l=5.0*r;
        w=3.0*r;
        l1=.45*l;
        l2=.55*l;
        w/=2.0;
        printf("Case %d:\n%.0lf %.0lf\n%.0lf %.0lf\n%.0lf %.0lf\n%.0lf %.0lf\n",i,-l1,w,l2,w,l2,-w,-l1,-w);
    }
    return 0;
}
