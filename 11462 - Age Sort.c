#include<stdio.h>
#include<stdlib.h>
int order(void const *a,void const *b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
    int ar[2000005];
    long i,nm;
    while(scanf("%ld",&nm)==1)
    {
        if(nm==0)
            break;
        for(i=0; i<nm; i++)
            scanf("%d",&ar[i]);
        qsort(ar,nm,sizeof(int),order);
        for(i=0; i<nm; i++)
        {
            if(i==(nm-1))
                printf("%d",ar[i]);
            else printf("%d ",ar[i]);
        }
        printf("\n");
    }
    return 0;
}
