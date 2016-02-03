#include<stdio.h>
int no[11];
void funf(int i)
{
    int j;
    for(j=0; j<=9; j++)
    {
        if(i==j)
        {
            no[j]++;
            break;
        }
    }
    return;
}
int main()
{
    int j,i,k,a,tst,b;
    scanf("%d",&tst);
    for(i=1; i<=tst; i++)
    {

        scanf("%d",&a);
        for(k=1; k<=a; k++)
        {
            b=k;
                while(b!=0)
                {
                funf(b%10);
                b/=10;
                }
        }
        for(k=0; k<=9; k++)
        {
            if(k==9)
                printf("%d\n",no[k]);
            else
                printf("%d ",no[k]);
        }
        for(k=0; k<11; k++)
            no[k]=0;
    }
    return 0;
}
