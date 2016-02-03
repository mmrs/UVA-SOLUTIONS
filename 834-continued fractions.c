#include<stdio.h>
int main()
{
    int a,b,c,d,nm[100],i,j;
    while(scanf("%d %d",&a,&b)==2)
    {
        i=0;
        while(a%b!=0)
        {
            c=b;
            d=a;
            nm[i]=a/c;
            i++;
            a=b;
            b=d%c;
        }
        nm[i]=a/b;
        for(j=0;j<=i;j++)
        {
            if(j==0)
                printf("[%d;",nm[j]);
                else if(j==i)
                    printf("%d]\n",nm[j]);
                else printf("%d,",nm[j]);
        }
    }
    return 0;
}
