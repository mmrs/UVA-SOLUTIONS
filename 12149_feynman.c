#include<stdio.h>
int main()
{
    int i,a,sum;
    while(scanf("%d",&a)&&a)
    {
        sum=0;
        for(i=1; i<=a; i++)
            sum+=i*i;
        printf("%d\n",sum);
    }
    return 0;
}
