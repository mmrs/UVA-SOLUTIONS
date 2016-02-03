#include<stdio.h>
int main()
{
    int tc,a,c,d,e,f,g,h,sum;
    scanf("%d",&tc);
    for(a=1; a<=tc; a++)
    {
        sum=0;
        scanf("%d %d %d",&c,&d,&e);
        c=c+d;
        g=c/e;
        h=c%e;
        sum+=g;
        d=g+h;
        while(d>=e)
        {
            g=d/e;
            h=d%e;
             d=g+h;
            sum+=g;

        }
        printf("%d\n",sum);

    }
    return 0;
}
