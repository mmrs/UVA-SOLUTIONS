#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
   for(e=1;e<=a;e++)
   {
       scanf("%d %d %d",&b,&c,&d);
       if((b>c && b<d) || (b>d && b<c))
       printf("Case %d: %d\n",e,b);
       else if((c<b && c>d) || (c<d &&c>b))
       printf("Case %d: %d\n",e,c);
       else
       printf("Case %d: %d\n",e,d);

   }
   return 0;
}
