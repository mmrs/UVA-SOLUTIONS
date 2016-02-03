#include<stdio.h>
#include<algorithm>
using namespace std;
int gcd(int a,int b)
{
    while(b>0)
    {
        a%=b;
        swap(a,b);
    }
    return a;
}
int main()

{
    int a,b;
    while(scanf("%d %d",&a,&b)==2)
    {
        if((gcd(a,b))==1)
            printf("%10d%10d    Good Choice\n\n",a,b);
        else printf("%10d%10d    Bad Choice\n\n",a,b);
    }
    return 0;
}
