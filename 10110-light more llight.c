#include<stdio.h>
#include<math.h>
int main()
{
    long long int l,i,srt;
    while(scanf("%lld",&l)&&l)
    {
        i=sqrt(l);
        srt=i*i;
        if(srt==l)
            printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
