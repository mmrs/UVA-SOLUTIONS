#include<stdio.h>
#include<math.h>
int main()
{
    int a,cs=1;
    double i,j,k,ans1,ans2;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        scanf("%lf %lf %lf",&i,&j,&k);
        if(a==1)
        {
            ans2=(j-i)/k;
            ans1=(j*j-i*i)/(2.0*ans2);
            printf("Case %d: %.3lf %.3lf\n",cs,ans1,ans2);
        }
        else if(a==2)
        {
            ans2=(j-i)/k;
            ans1=(j*j-i*i)/(2.0*k);
           printf("Case %d: %.3lf %.3lf\n",cs,ans1,ans2);
        }
        else if(a==3)
        {
            ans1=sqrt(i*i+2.0*j*k);
            ans2=(ans1-i)/j;
            printf("Case %d: %.3lf %.3lf\n",cs,ans1,ans2);
        }
        else if(a==4)
        {
            ans1=sqrt(i*i-2.0*j*k);
            ans2=(i-ans1)/j;
            printf("Case %d: %.3lf %.3lf\n",cs,ans1,ans2);
        }
        ++cs;
    }
    return 0;
}
