#include<stdio.h>
int main()
{
    /*freopen("F:\\in.txt","r",stdin);*/
    int a,i,tst,tl_egg,eg_no,wght,egg[32],count;
    scanf("%d",&tst);
    for(i=1; i<=tst; i++)
    {
        scanf("%d %d %d",&tl_egg,&eg_no,&wght);
        for(a=0; a<tl_egg; a++)
            scanf("%d",&egg[a]);
        for(count=0,a=0; eg_no>0 &&tl_egg>0 && wght>=egg[a]; a++)
        {
            wght-=egg[a];
            tl_egg--;
            eg_no--;
            ++count;
        }
        printf("Case %d: %d\n",i,count);
    }
    return 0;
}
