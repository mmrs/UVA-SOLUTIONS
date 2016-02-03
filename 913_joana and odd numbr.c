#include<stdio.h>
int main()
{
    long long int a;
    while(scanf("%lld",&a)==1)
    {
        a=(a/2)+1;
        a=(a*a*2)-1;                        /*a=pod songkha n/2+1,last pod=a*a*2-1;*/
        printf("%lld\n",3*a-6);
    }
    return 0;
}
/*#include<stdio.h>
#include<math.h>
int main()
{
    int a,ar,i,j,k,l;
    while(scanf("%d",&a)==1)
    {
        k=1;
        a=ceil((double)a/2);
        for(i=0,l=1; i<a;l+=2, i++)
        {
            for(j=0; j<l; k+=2,j++)
                ar=k;
        }
        printf("%d\n",ar+(ar-2)+(ar-4));
    }
return 0;
}
*/
