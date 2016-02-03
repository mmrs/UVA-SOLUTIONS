#include<stdio.h>
#include<math.h>
int main()
{
    int i,tst;
    double d,v,u,tm_min,dstnc_min,ans;
    scanf("%d",&tst);
    for(i=1; i<=tst; i++)
    {
        scanf("%lf %lf %lf",&d,&v,&u);
        tm_min=d/sqrt(u*u-v*v);
        dstnc_min=d/u;
        ans=tm_min-dstnc_min;
        if(v>=u || ans==0)
            printf("Case %d: can't determine\n",i);
        else printf("Case %d: %.3lf\n",i,ans);
    }
    return 0;
}
