#include<stdio.h>
int main()
{
    int a,b,ar[105],i,j,k;
    while(scanf("%d",&a)&&a)
    {
        for(i=1; i<105; i++)
            ar[i]=0;
        for(i=1; i<=a; i++)
            ar[i]=i;
        k=j=1;
        printf("Discarded cards:");
        for(i=1; ar[i]!=0; i++)
        {
            if(i%2==1 && k<a)
            {
                k++;
                if(k==a) printf(" %d",ar[i]);
                else  printf(" %d,",ar[i]);
            }
            if(i%2==0) ar[a+(j++)]=ar[i];
        }
        printf("\nRemaining card: %d\n",ar[i-1]);
    }
    return 0;
}
