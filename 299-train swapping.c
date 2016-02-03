#include<stdio.h>
int main()
{
    int tst,nm[100],n,i,j,flip,tmp;
    scanf("%d",&tst);
    while(tst--)
    {
        scanf("%d",&n);
        flip=0;
        for(i=0; i<n; i++)
            scanf("%d",&nm[i]);
        for(i=0; i<n; i++)
            for(j=i+1; j<n; j++)
                if(nm[j]<nm[i])
                    flip++;
        printf("Optimal train swapping takes %d swaps.\n",flip);
    }
    return 0;
}

