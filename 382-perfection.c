#include<stdio.h>
int main()
{
    int a,b,c,res,flag=0,i;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
           {
             printf("END OF OUTPUT\n");
             break;
           }
        b=a/2;
        res=0;
        for(i=1; i<=b; i++)
            if(a%i==0)
                res+=i;
        if(flag==0)
        {
            printf("PERFECTION OUTPUT\n");
            flag=1;
        }
        if(res==a)
            printf("%5d  PERFECT\n",a);
        else if(res>a)
            printf("%5d  ABUNDANT\n",a);
        else printf("%5d  DEFICIENT\n",a);
    }
    return 0;
}
