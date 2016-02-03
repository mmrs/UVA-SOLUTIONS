#include<stdio.h>
int main()
{
    int tst,a,b,i,j,c,d,x;
    scanf("%d",&tst);
    for(c=0; c<tst; c++)
    {
        scanf("%d %d",&a,&b);
        for(d=0; d<b; d++)
        {
            x=1;
            for(i=1; i<=a; i++)
            {
                for(j=1; j<=i; j++)
                    printf("%d",x);
                printf("\n");
                x++;
            }
            x-=2;
            i=a;
            --i;
            for(; i>0; i--)
            {
                for(j=1; j<=i; j++)

                    printf("%d",x);
                printf("\n");
                x--;
            }
            if(d!=b-1)printf("\n");
        }
        if(c!=tst-1)printf("\n");
    }
    return 0;
}
