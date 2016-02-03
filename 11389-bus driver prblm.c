#include<stdio.h>
int o1(const void *a,const void *b)
{
    return(*(int*)a-*(int*)b);
}
int o2(const void *a,const void *b)
{
    return(*(int*)b-*(int*)a);
}
int main()
{
    int n,d,r,i,a[101],b[101],tm_count,j,tmp;
    while(scanf("%d %d %d",&n,&d,&r)==3)
    {
        if(n==0 && d==0 && r==0)break;
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
            qsort(a,n,sizeof(int),o1);
        for(i=0; i<n; i++)
            scanf("%d",&b[i]);
            qsort(b,n,sizeof(int),o2);
        tm_count=0;
        for(i=0; i<n; i++)
        {
            tmp=a[i]+b[i];
            if(tmp>d)
                tmp-=d;
                else tmp=0;
            tm_count+=tmp;
        }
    printf("%d\n",tm_count*r);
}
return 0;
}
