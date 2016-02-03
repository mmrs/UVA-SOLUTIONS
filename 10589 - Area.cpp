#include<stdio.h>
#include<math.h>


double distance(double x1,double x,double y1,double y)
{
return(sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y)));

}

bool check_inside(double x,double y,double z)
{

    if(distance(0.0,x,0,y)>z)
        return false;
    if(distance(z,x,0.0,y)>z)
        return false;
    if(distance(z,x,z,y)>z)
        return false;
    if(distance(0.0,x,z,y)>z)
        return false;

    return true;
}

int main()

{

 //freopen("input.txt","r",stdin);
    int t,i,j,a,m;
    double x,y,z;

    while(scanf("%d %lf",&t,&z)==2)
    {
        if(t==0 && z==0)
            break;
        m=0;
        for(i=0; i<t; i++)
        {
            scanf("%lf %lf",&x,&y);
            if(check_inside(x,y,z)==true)
                m++;

        }
     //  printf("%d\n",m);
        printf("%.5lf\n",(m*z*z)/t);

    }
    return 0;
}
