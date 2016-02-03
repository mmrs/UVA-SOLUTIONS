#include<stdio.h>
#include<math.h>
int main()
{
    int tl_min,minar[21],t,i,j=1,mile,juice;
    scanf("%d",&t);
    while(t--)
    {
        mile=juice=0;
        scanf("%d",&tl_min);
        for(i=0; i<tl_min; i++)
        {
            scanf("%d",&minar[i]);
            if(minar[i]%10==0)minar[i]++;
            mile+=ceil((double)minar[i]/30);
            juice+=ceil((double)minar[i]/60);
        }
        mile*=10;
        juice*=15;
        if(mile>juice)
            printf("Case %d: %s %d\n",j++,"Juice",juice);
        else if(juice>mile)
            printf("Case %d: %s %d\n",j++,"Mile",mile);
        else printf("Case %d: %s %s %d\n",j++,"Mile","Juice",mile);
    }
    return 0;
}
