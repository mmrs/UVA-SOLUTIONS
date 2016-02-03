#include<stdio.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4)
    {
        if(a==0 && b==0 && c==0 && d==0)
            break;
        if(c>=a && d>=b)
            printf("%d\n",(c-a)*60+(d-b));
        else if(c>a && d<b)
            printf("%d\n",(c*60+d)-(a*60+b));
        else if(c==a && d<b)
            printf("%d\n",1440-(b-d));
        else if(a>c && d==b)
            printf("%d\n",1440-(a-c)*60);
        else if(a>c && d>b)
            printf("%d\n",1440-(a-c)*60+(d-b));
        else if(a>c && d<b)
            printf("%d\n",1440-(a-c)*60-(b-d));
    }
    return 0;
}
