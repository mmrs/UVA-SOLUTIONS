#include<stdio.h>
int main()
{
    register int b;
    int test,a,count;
    double row;
    scanf("%d",&test);
    for(b=0; b<test; b++)
    {
        scanf("%lf",&row);
        count=0;
        for(a=1; row>=a;row-=a,a++)
            count++;
        printf("%d\n",count);
    }
    return 0;
}
