#include<stdio.h>
int main()
{
    double h,m;
    while(scanf("%lf:%lf",&h,&m)==2)
    {
        if(h==0 && m==0)
            break;
        h=h*30-m*5.5;
        if(h>=0 && h<=180)
            printf("%.3lf\n",h);
        else if(h>180)
            printf("%.3lf\n",360-h);
        else if(h<0 && h>=-180)
            printf("%.3lf\n",-h);
            else
                printf("%.3lf\n",h+360);
    }
    return 0;
}
