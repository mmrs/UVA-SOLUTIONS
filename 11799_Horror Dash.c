#include<stdio.h>
int main()
{
    int a,b,c,tmp,tst,sz;
    scanf("%d",&tst);
    for(a=1; a<=tst; a++)
    {
        int arr[1000]= {0};
        scanf("%d",&sz);
        for(b=0; b<sz; b++)
            scanf("%d",&arr[b]);
        for(b=0; b<sz; b++)
        {
            for(c=0; c<sz; c++)
            {
                if(arr[c]>arr[c+1])
                {
                    tmp=arr[c];
                    arr[c]=arr[c+1];
                    arr[c+1]=tmp;
                }
            }
        }
        printf("Case %d: %d\n",a,arr[sz]);
    }

    return 0;
}
