#include<stdio.h>
#include<stdlib.h>
int ordr(const void *a,const void *b)
{
    return(*(int*)a-*(int*)b);
}
int main()
{
    int tst,*nm,i,j,a,flag,dif,nm2[3001];
    while(scanf("%d",&tst)==1)
    {
        nm=(int*)malloc(tst*sizeof(int));
        for(i=0; i<tst; i++)
            scanf("%d",&nm[i]);
        tst--;
        for(i=0; i<tst; i++)
            nm2[i]=abs(nm[i]-nm[i+1]);
        qsort(nm2,tst,sizeof(int),ordr);
        flag=0;
        tst--;
        for(i=0; i<tst; i++)
        {
            if(abs(nm2[i]-nm2[i+1])!=1)
                {
                    flag=1;
                    break;
                }
        }
        if(flag==0)
            printf("Jolly\n");
        else printf("Not jolly\n");
    }
    return 0;
}
