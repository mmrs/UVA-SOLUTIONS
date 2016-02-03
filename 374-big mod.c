#include<stdio.h>
int mod(int a,int b,int c)
{
    int res;
    if(b==0)
        return 1;
    else if(b%2!=0)
        return((a%c)*mod(a,b-1,c))%c;
    else
    {
        res=mod(a,b/2,c);
        return (res*res)%c;
    }
}
int main()
{
    int a,b,c;
    while(scanf("%d\n%d\n%d",&a,&b,&c)==3)
    {
        printf("%d\n",mod(a,b,c));
    }
    return 0;
}
