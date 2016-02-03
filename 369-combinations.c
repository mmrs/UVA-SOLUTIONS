#include<stdio.h>
long long int aCb(int a,int b);
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0 && b==0)
            break;
        printf("%d things taken %d at a time is %lld exactly.\n",a,b,aCb(a,b));
    }
    return 0;
}
long long int aCb(int a,int b)
{
    int i;
    long long res=1;
    if(a-b<b)
        b=a-b;
    for(i=1; i<=b; i++,a--)
    {
        res*=a;
        res/=i;
    }
    return res;
}
