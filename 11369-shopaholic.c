#include<stdio.h>
#include<stdlib.h>
int ordr(const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
    int a,ar[20002],count,tst,i;
    scanf("%d",&tst);
    while(tst--)
    {
        scanf("%d",&a);
        for(i=0;i<a;i++)scanf("%d",&ar[i]);
        qsort(ar,i,sizeof(int),ordr);
        count=0;
        for(;a>2;a-=3)
        {
            count+=ar[a-3];
        }
        printf("%d\n",count);
    }
    return 0;
}
