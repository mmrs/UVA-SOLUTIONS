#include<stdio.h>
int main()
{
    int a[15],b[15],k=1,carry,i;
    while(scanf("%d",&a[0])==1)
    {
        if(a[0]<0)
            break;
        for(i=1; i<13; i++)
            scanf("%d",&a[i]);
        for(i=0; i<12; i++)
            scanf("%d",&b[i]);
        printf("Case %d:\n",k++);
        carry=0;
        for(i=0; i<12; i++)
        {
            if((a[i]+carry)>=b[i])
            {
                carry+=a[i]-b[i];
                printf("No problem! :D\n");
            }
            else
            {
                printf("No problem. :(\n");
                carry+=a[i];
            }
        }
    }
    return 0;
}
