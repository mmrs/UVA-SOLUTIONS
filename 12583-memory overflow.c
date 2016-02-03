#include<stdio.h>
int main()
{
    int t,d,m,i,j,l,count;
    char nm[502];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        count=0;
        int flag[502]={0};
        scanf("%d %d %s",&d,&m,&nm);
        for(j=0;j<d;j++)
        {
            for(l=j+1;l<j+1+m && l<d;l++)
            {
                if(nm[j]==nm[l] && flag[l]==0)
                {
                    count++;
                    flag[l]=1;
                }
            }
        }
        printf("Case %d: %d\n",i,count);
    }
    return 0;
}
