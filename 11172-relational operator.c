#include<stdio.h>
int main()
{
    int t,a,b,count;
    scanf("%d",&t);
    for(count=1; count<=t && t<15; count++)
    {
        scanf("%d %d",&a,&b);
        if(a==b)
            printf("=\n");
        else if(a>b)
            printf(">\n");
        else
            printf("<\n");
    }
    return 0;
}
