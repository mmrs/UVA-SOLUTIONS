#include<stdio.h>
main()
{
    int a,tst,l,w,h;
    scanf("%d",&tst);
    for(a=0;a<tst;a++)
    {
        scanf("%d %d %d",&l,&w,&h);
        if(l<=20 && w<=20 && h<=20)
            printf("Case %d: good\n",a+1);
        else printf("Case %d: bad\n",a+1);
    }
}
