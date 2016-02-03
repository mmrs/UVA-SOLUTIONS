#include<stdio.h>
int main()
{
    long long int a,b,c,d,gnrtr,max,count;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a==0 &&b==0)
            break;
        if(a>b)
            a^=b^=a^=b;
        d=a;
        gnrtr=max=0;
        for(; a<=b; a++)
        {
            c=a;
            count=0;
            while(1)
            {
                if(c%2==0)
                    c/=2;
                else c=3*c+1;
                count++;
                if(c==1)break;
            }
            if(count>max)
            {
                max=count;
                gnrtr=a;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",d,b,gnrtr,max);
    }
    return 0;
}
