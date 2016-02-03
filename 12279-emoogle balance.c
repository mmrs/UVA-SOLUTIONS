#include<stdio.h>
int main()
{
    int evnt_nmbr,evnt[1001],count,i,j=1;
    while(scanf("%d",&evnt_nmbr)&&evnt_nmbr)
    {
        count=0;
        for(i=0;i<evnt_nmbr;i++)scanf("%d",&evnt[i]);
        for(i=0;i<evnt_nmbr;i++)
        {
            if(evnt[i]==0)
                count--;
                else count++;
        }
        printf("Case %d: %d\n",j++,count);
    }
    return 0;
}
