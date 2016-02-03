#include<stdio.h>
int main()
{
    int tc,a,b,c;
    scanf("%d",&tc);
    for(c=0; c<tc; c++)
    {
        scanf("%d %d",&a,&b);

        if(b%a==0)
            printf("%d %d\n",a,b);
        else
            printf("-1");
    }

    return 0;
}
