#include<stdio.h>
#include<stdlib.h>
int order(const void *a,const void *b)
{
    return(*(int*)a-*(int*)b);
}
int main()
{
    int a,b,tst,ar[502],dif,mid;
    scanf("%d",&tst);
    while(tst--)
    {
        mid=dif=0;
        scanf("%d",&a);
        for(b=0; b<a; b++)
            scanf("%d",&ar[b]);
        qsort(ar,b,sizeof(int),order);
        if(a%2==0)
            mid=(ar[a/2]+ar[(a/2)-1])/2;
        else mid=ar[a/2];
        for(b=0; b<a; b++)
            dif+=abs(mid-ar[b]);
        printf("%d\n",dif);
    }
    return 0;
}
