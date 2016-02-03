#include<stdio.h>
int main()
{
    int tst,a,b,c,d,lp;
    scanf("%d",&tst);
    for(lp=0; lp<tst; lp++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a==b &&b==c&&c==d)
            printf("square\n");
            else if(a==c&&b==d)
            printf("rectangle\n");
            else if(a+b+c>d && a+b+d>c&&a+c+d>b && b+c+d>a)
            printf("quadrangle\n");
            else printf("banana\n");
    }

    return 0;
}
