#include<stdio.h>
int main()
{
    int t,cnt=0;
    double h,w,d,weight;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf %lf %lf %lf",&h,&w,&d,&weight);
        if(((h+w+d<=125.0)||(h<=56.0 && w<=45.0 && d<=25.0)) && weight<=7.0)
        {
            printf("1\n");
            cnt++;
        }
        else printf("0\n");

    }
    printf("%d\n",cnt);
    return 0;

}
