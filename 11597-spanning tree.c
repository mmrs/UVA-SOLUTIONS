#include<stdio.h>
int main()
{
    int a,c=1;
    while(scanf("%d",&a)&&a)
        printf("Case %d: %d\n",c++,a/2);
        return 0;
}
