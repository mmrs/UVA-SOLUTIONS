#include<stdio.h>
int fact(int a);
int main()
{
    int a,b,c,i;
    long long ans,facti[20];
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0 && b==0)
            break;
        ans=1;
        for(i=0;i<b;a--,i++)
            ans*=a;
            for(i=1;i<=b;i++)
            facti[i]=fact(i);

        ans=ans/(facti[b]);
        printf("%lld\n",ans);
    }
    return 0;
}
    int fact(int a)
    {
        int i;
        i=1;
        for(;a>0; a--)
            i*=a;
        return i;
    }
