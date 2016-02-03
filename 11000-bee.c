#include<stdio.h>
int main()
{
    long long int a,b,c,i;
    while(scanf("%lld",&a)==1)
    {
        if(a==-1)
            break;
        if(a==0)
        {
            printf("0 1\n");
            continue;
        }
        i=b=1;
        c=2;
        a--;
        for(; a>0; a--)
        {
            i=c;
            c=b+c+1;
            b=i;
        }
        printf("%lld %lld\n",i,c);
    }
    return 0;
}
