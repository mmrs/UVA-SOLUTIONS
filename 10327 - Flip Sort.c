#include<stdio.h>
int main()
{
    int nm[1000],n,i,j,flip,tmp;
    while(scanf("%d",&n)==1)
    {
        flip=0;
        for(i=0; i<n; i++)
            scanf("%d",&nm[i]);
        for(i=0; i<n; i++)
            for(j=i+1; j<n; j++)
                if(nm[j]<nm[i])
                    flip++;
        printf("Minimum exchange operations : %d\n",flip);
    }
    return 0;
}
