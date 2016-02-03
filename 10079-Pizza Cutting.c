#include<stdio.h>
int main()
{
    long long int count,cut,pic;
    while(scanf("%lld",&cut)==1)
    {
        if(cut<0)
            break;
             pic=1;
        for(count=1; count<=cut; count++)
            pic=pic+count;
        printf("%lld\n",pic);
    }
    return 0;
}

