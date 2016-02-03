#include<stdio.h>
#include<stdlib.h>
int main()
{
    int count=0;
    unsigned a,b;
    char sn,c[5];
    while(scanf("%3d%c%3d=%s",&a,&sn,&b,c)==4)
    {
       if(sn=='+')
       {
           if(atoi(c)==(a+b))
            count++;
       }
       else if(sn=='-')
       {
           if(atoi(c)==(a-b))
            count++;
       }
    }
    printf("%d\n",count);
return 0;
}
