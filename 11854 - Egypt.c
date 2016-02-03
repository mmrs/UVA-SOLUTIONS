#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        if(a==0 && b==0 && c==0)
            break;

        while(a<30000 && b<30000 && c<30000)
        {
            if((c*c==a*a+b*b) || (a*a==b*b+c*c) || (b*b==a*a+c*c))
                printf("right\n");
            else printf("wrong\n");

            break;
        }
    }
    return 0;
}
