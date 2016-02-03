#include<stdio.h>
#include<algorithm>
#include<cstring>
using namespace std;

int ar[10005];
int main()
{
    int tl,ree,j,i;
    while(scanf("%d %d",&tl,&ree)==2)
    {
        memset(ar,0,sizeof ar);
        for(i=1; i<=ree; i++)
            scanf("%d",&ar[i]);
        sort(ar,ar+ree+1);
        if(tl==ree)
            printf("*");
        else
        {
            j=1;
            for( i=1; i<=tl; i++)
            {
                if(i!=ar[j])
                {
                    printf("%d ",i);
                }
                else
                {
                    j++;
                }

            }
        }
        printf("\n");
    }

    return 0;
}
