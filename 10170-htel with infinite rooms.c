#include<stdio.h>
int main()
{
    long long a,s,t;
    while(scanf("%lld %lld",&s,&t)==2)
    {
        a=s;
        for(t-=s+1; t>=0; t-=++s)
            a++;
        printf("%lld\n",a);
    }
    return 0;
}
