#include<stdio.h>
int main()
{
    int tst,i,j,day,prty,arr[102],a,hrtl,b,darr[3655];
    scanf("%d",&tst);
    for(i=1; i<=tst; i++)
    {
        scanf("%d",&day);
        scanf("%d",&prty);
        for(j=0; j<prty; j++)
            scanf("%d",&arr[j]);
        hrtl=0;
        for(j=0; j<=day; j++)
            darr[j]=0;
        for(a=0; a<prty; a++)
        {
            for(j=0; j<=day; j+=arr[a])
            {
                b=j%7;
                if(b>=1 && b<=5 && darr[j]!=1)
                {
                    hrtl++;
                    darr[j]=1;
                }
            }
        }
        printf("%d\n",hrtl);

    }
    return 0;
}
