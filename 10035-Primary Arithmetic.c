#include<stdio.h>
int main()
{
    int carry,car;
    unsigned long e,f,a,b;
    while(scanf("%lu %lu",&a,&b)==2)
    {
        car=carry=0;
        if(a==0 && b==0)
            break;
        while(a||b)
        {
            e=a%10;
            f=b%10;
            if(carry+e+f>=10)
            {
                carry=1;
                car++;
            }
            else carry=0;
            a=a/10;
            b=b/10;
        }
        if(car==0)
            printf("No carry operation.\n");
        else if(car==1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n",car);
    }
    return 0;
}
