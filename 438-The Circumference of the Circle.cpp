#include<stdio.h>
#include<math.h>
#define PI 3.141592653589793

int main()
{
    double x1,x2,x3,y1,y2,y3,a,b,c,r;
    while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)==6)
    {
        a = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        b = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
        c = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
        r = a*b*c/sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b));
        printf("%.2lf\n",2*PI*r);

    }

    return 0;
}
