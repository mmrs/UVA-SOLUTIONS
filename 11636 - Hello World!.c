#include<stdio.h>
int main()
{
    int a,b,c=0,d=0;
    while(scanf("%d",&a)==1)
    {    ++d;
        if(a<0)
        break;
        for(b=1;b<a;b=b+b)
         ++c;
            printf("Case %d: %d\n",d,c);
            c=0;
    }
    return 0;
}
