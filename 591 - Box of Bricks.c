#include<stdio.h>
int main()
{
    int a,b=0,br[50],stck,br_avg,count;
    while(scanf("%d",&stck)==1)
    {
        if(stck==0)
            break;
        count=br_avg=0;
        for(a=0; a<stck; a++)
        {
            scanf("%d",&br[a]);
            br_avg+=br[a];
        }
        br_avg/=stck;
        for(a=0; a<stck; a++)
        {
            while(br[a]>br_avg)
            {
                br[a]--;
                ++count;
            }
            while(br[a]<br_avg)
            {
                br[a]++;
                ++count;
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",++b,count/2);
    }
    return 0;
}
