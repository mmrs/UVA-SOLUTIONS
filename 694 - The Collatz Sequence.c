#include"stdio.h"
int main()
{
    long a,b,c,count,cs=1;
    while(scanf("%ld %ld",&a,&b)==2)
    {
        count=0;
        c=a;
        if(a<0 && b<0)
            break;
        while(a<=b)
        {
            ++count;
            if(a==1)
                break;
            else if(a%2==0)
                a/=2;
            else a=3*a+1;
        }
        printf("Case %ld: A = %ld, limit = %ld, number of terms = %ld\n",cs,c,b,count);
        cs++;
    }
    return 0;
}
