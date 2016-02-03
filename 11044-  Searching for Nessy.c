#include<stdio.h>
int main()
{
    int tst,n,m,i;
    scanf("%d",&tst);
    for(i=0;i<tst;i++)
    {
        scanf("%d %d",&n,&m);
       printf("%d\n",(n/3)*(m/3));
    }
    return 0;
}
