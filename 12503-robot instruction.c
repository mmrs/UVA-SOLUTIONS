#include<stdio.h>
#include<string.h>
int main()
{
    int tst,a,i,j,ar[101],count;
    char ins[10];
    scanf("%d",&tst);
    while(tst--)
    {
        count=0;
        scanf("%d",&a);
        for(i=1;i<=a;i++)
        {
           scanf("%s",ins);
           if(strcmp(ins,"LEFT")==0)
           {
               count--;
               ar[i]=-1;
           }
           else if(strcmp(ins,"RIGHT")==0)
           {
               count++;
               ar[i]=1;
           }
           else
           {
               scanf("%s%d",ins,&j);
               count+=ar[j];
               ar[i]=ar[j];
           }
        }
        printf("%d\n",count);
    }
    return 0;
}
