#include<stdio.h>
#define sz 1002
bool flag[sz];
void seive(void);
int main()
{

    seive();
    int t,i,j,k,sum,flg,cs=0,fact;
    while(scanf("%d",&sum)&&sum)
    {
        ++cs;
        flg=0;
        if(sum==1)
        {
             printf("Case %d: 1\n",cs);
             continue;

        }
        if(flag[sum-1]==0)
        {
            printf("Case %d: %d\n",cs,sum-1);
            continue;
        }
        i=sum-1;
        for(; i>0; i--)
        {
            fact=0;
            for(j=1;j<=i/2;j++)
                if(i%j==0)
                    fact+=j;
            fact+=i;
            if(fact==sum)
            {
                printf("Case %d: %d\n",cs,i);
                flg=1;
                break;
            }
        }
        if(flg==0)
           printf("Case %d: -1\n",cs);
    }
    return 0;
}
void seive(void)
{
    int i,j,k,add;
    flag[0]=flag[1]=1;
    flag[2]=0;
    for(i=4; i<sz; i+=2)
        flag[i]=1;
    for(i=3; i<sz; i+=2)
    {
        if(!flag[i])
        {
            add=i*2;
            for(j=i*i; j<sz; j+=add)
                flag[j]=1;
        }
    }
    return;
}
