#include<stdio.h>
int main()
{
    unsigned long a;
    while(scanf("%lu",&a)==1)
    {
        if(a==0)
        break;
        while(a>=10)
        {
            a=a/10+a%10;
        }
        printf("%lu\n",a);

    }
    return 0;
}
