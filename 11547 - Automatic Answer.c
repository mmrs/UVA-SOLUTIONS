#include<stdio.h>
int main()
{
    int a,tst,n;
    scanf("%d",&tst);
    for(a=0; a<tst; a++)
    {
        scanf("%d",&n);
        n=(((((n*567)/9)+7492)*235)/47)-498;
        n=n/10;
        n=n%10;
        if(n<0)
            printf("%d\n",-n);
        else printf("%d\n",n);
    }
    return 0;
}
