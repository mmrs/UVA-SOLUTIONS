#include<stdio.h>

int main()
{
    int sum=0,count,T,a,b;
    scanf("%d",&T);
    for(count=1; count<=T &&(T>=1 && T<=100); count++)

    {
        scanf("%d",&a);
        scanf("%d",&b);
        while(a>=0 && b>=a && 100>=b)
        {
            for(a=a; a<=b; a++)
            {
                if(a%2!=0)
                    sum+=a;
            }
            printf("Case %d: %d\n",count,sum);
            sum=0;

            break;
        }
    }

    return 0;
}
