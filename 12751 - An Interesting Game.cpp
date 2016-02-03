#include<stdio.h>
long long count;
int main()
{
    int tst,i,e,s,cs=1,n;
    scanf("%d",&tst);
    while(tst--)
    {
        count=0;
        scanf("%d %d %d",&n,&e,&s);
        for(i=1;i<s;i++)
            count+=i;

            for(i=s+e;i<=n;i++)
                count+=i;

            printf("Case %d: %lld\n",cs++,count);

    }

    return 0;
}
