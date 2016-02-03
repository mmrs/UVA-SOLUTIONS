#include<stdio.h>
int main()
{
    int i,tst,j;
    double ans,frmr,area,sagol,en;
    scanf("%d",&tst);
    for(j=0; j<tst; j++)
    {
        scanf("%lf",&frmr);
        ans=0;
        for(i=0; i<frmr; i++)
        {
            scanf("%lf %lf %lf",&area,&sagol,&en);
            ans+=((area/sagol)*en)*sagol;
        }
        printf("%.0lf\n",ans);
    }
    return 0;
}
