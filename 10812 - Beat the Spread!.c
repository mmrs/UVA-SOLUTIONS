#include<stdio.h>
int main()
{
    int tst,a,s,d;
    scanf("%d",&tst);
    for(a=0; a<tst; a++)
    {
        scanf("%d %d",&s,&d);
        if((s+d)%2!=0)
        {
            printf("impossible\n");
            continue;
        }
        else
        {
            d=(s+d)/2;
            s=s-d;
        }
        if(s<0 || d<0)
            printf("impossible\n");
        else if(s>d)
            printf("%d %d\n",s,d);
        else printf("%d %d\n",d,s);
    }
    return 0;
}

/*#include<stdio.h>
int main()
{
int a,b,x,y,i=1,t;
scanf("%d",&t);
while (i<=t)
           {
        scanf("%d %d",&a,&b);
                  if (a>=b&&(a+b)%2==0)
                   {
                   x=(a+b)/2;
                   y=(a-b)/2;
                   printf("%d %d\n",x,y);
                   }
         else
         printf("impossible\n");
         i++;
          }
return 0;
}
*/
