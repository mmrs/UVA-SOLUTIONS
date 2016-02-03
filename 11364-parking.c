#include<stdio.h>
#include<stdlib.h>
int order(const void *a,const void *b)
{
    return(*(int*)a-*(int*)b);
}
int main()
{
    int tst,shop,i,*shop_ar;
    scanf("%d",&tst);
    while(tst--)
    {
        scanf("%d",&shop);
        shop_ar=(int*)malloc(shop*sizeof(int));
        for(i=0; i<shop; i++)
            scanf("%d",&shop_ar[i]);
        qsort(shop_ar,shop,sizeof(int),order);
        printf("%d\n",shop_ar[shop-1]-shop_ar[0]+shop_ar[shop-1]-shop_ar[0]);
    }
    return 0;
}
