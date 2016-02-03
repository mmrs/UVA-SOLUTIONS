#include<stdio.h>
int main()
{
    int a,b,x,c,r,w,q,max;
    while(scanf("%d %d",&a,&b)==2)
    {
        w=a;
        q=b;

        if(a>b)

        {
            r=a;
            a=b;
            b=r;
        }
        max=0;
        for(x=a; x<=b; x++)
        {
            c=1;
            a=x;

            while(a!=1)

            {
                c++;
                if(a%2!=0)
                    a=3*a+1;
                else a=a/2;
            }
            if(c>max)
                max=c;
        }
        printf("%d %d %d\n",w,q,max);
    }
    return 0;
}
