#include<stdio.h>
int ar[50004],n;
int search(int qn);
int main()

{
    int q,qn,i,pos,k;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        scanf("%d",&ar[i]);
    scanf("%d",&q);
    for(i=0; i<q; i++)
    {
        scanf("%d",&qn);
        pos=search(qn);
        if(pos>0)
        {
            k=pos;
            while(ar[k]==qn)
                --k;
            if(ar[k]>0)
                printf("%d ",ar[k]);
            else printf("X ");
            k=pos;
            while(ar[k]==qn)
                ++k;
            if(ar[k]>0)
                printf("%d\n",ar[k]);
            else printf("X\n");
            continue;
        }

        if(qn>ar[n])
            printf("%d X\n",ar[n]);
            else if(qn<ar[1])
                printf("X %d\n",ar[1]);
            else
            {
                k=n;
                while(ar[k]>qn)
                    --k;
                printf("%d %d\n",ar[k],ar[k+1]);
            }
    }

return 0;

}
int search(int qn)
{
    int beg=1,mid=0,pos=0,end;
    end=n;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(ar[mid]==qn)
        {
            pos=mid;
            break;
        }
        else if(ar[mid]>qn)
            end=mid-1;
        else if(ar[mid]<qn)
            beg=mid+1;
    }
   return pos;
}
