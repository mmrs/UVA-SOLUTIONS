#include<stdio.h>
#include<stdlib.h>
int sort(const void *a,const void *b)
{
    return(*(int*)a-*(int*)b);
}
int main()
{
    int j,i,a,b,count,e,ar[10],flag;
    while(scanf("%d %d",&a,&b)==2)
    {
        count=0;
        for(;a<=b;a++)
        {
            e=a;
            j=0;
            while(e!=0)
            {
                ar[j]=e%10;
                e/=10;
                j++;
            }
        qsort(ar,j,sizeof(int),sort);
        flag=0;
        j--;
        for(i=0;i<j;i++)
        {
            if(ar[i]==ar[i+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)count++;
        }
        printf("%d\n",count);
    }
return 0;
}
