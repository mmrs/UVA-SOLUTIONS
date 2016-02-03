#include<stdio.h>

int main()

{

    int pr,bud,h,w,i,j,cost,prc,mincost,seat;

    while(scanf("%d %d %d %d",&pr,&bud,&h,&w)==4)
    {
        cost=bud;
        mincost=bud;
        for(i=0;i<h;i++)
        {
            scanf("%d",&prc);

            for(j=0;j<w;j++)
            {
                scanf("%d",&seat);
                if(seat>=pr)
                    cost=prc*pr;
                if(mincost>cost)
                    mincost=cost;
            }

        }
        if(mincost==bud)
            printf("stay home\n");
        else printf("%d\n",mincost);
    }

    return 0;
}
