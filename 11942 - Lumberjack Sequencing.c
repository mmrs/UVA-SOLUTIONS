#include<stdio.h>
int main()
{
    int a,b,c=0,count,tc,d[10],f=0,g=0;
    scanf("%d",&tc);
    for(a=0;a<tc;a++)
    {
        for(b=0;b<10;b++)
        scanf("%d",&d[b]);
        for(b=0;b<9 && f==0;b++)
{
            if(d[b]>d[b+1])
            f=0;
            else f=1;
}
for(b=0;b<9 && g==0;b++)

{

    if(d[b]<d[b+1])
         g=0;
         else g=1;

}
if(c==0)
{
    printf("Lumberjacks:\n");
    c=1;
    }
    if(f==0||g==0)
    printf("Ordered\n");
    else printf("Unordered\n");
    f=g=0;

}
return 0;
    }





