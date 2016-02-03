#include<stdio.h>
int main()
{
    int TC,b,plr,age[100],e;
    scanf("%d",&TC);
    for(b=1;b<=TC;b++)
    {
        scanf("%d",&plr);
        if(plr>1 && plr<11)
        {
            for(e=0;e<plr;e++)
            scanf("%d",&age[e]);

           printf("Case %d: %d\n",b,age[e/2]);
        }
    }
    return 0;
}
