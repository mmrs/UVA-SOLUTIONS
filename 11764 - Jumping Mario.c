#include<stdio.h>
int main()
{
    int a,tc,wln,wl[50],hj,lj,b;
    scanf("%d",&tc);
    for(b=1;b<=tc;b++)
    {
        scanf("%d",&wln);
        for(a=0; a<wln; a++)
            scanf("%d",&wl[a]);
        hj=lj=0;
        for(a=1; a<wln; a++)
        {
            if(wl[a]>wl[a-1])
                hj++;
            else if(wl[a]<wl[a-1])
                lj++;
        }
        printf("Case %d: %d %d\n",b,hj,lj);
    }
    return 0;
}
