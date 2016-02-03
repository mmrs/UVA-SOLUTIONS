#include<stdio.h>
#define PI acos(-1)
int main()
{
    int Tc,l,a;
    double width,radius,tl_area,rec_area,cr_area;
    scanf("%d",&Tc);
    for(a=0;a<Tc;a++)
    {
        scanf("%d",&l);
        width=l*0.6;
        radius=l*0.2;
        tl_area=l*width;
        cr_area=PI*radius*radius;
        rec_area=tl_area-cr_area;
        printf("%.2lf %.2lf\n",cr_area,rec_area);
    }
return 0;

}
