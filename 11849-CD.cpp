#include<stdio.h>
#define sz  1000005
int ar[sz],ar1[sz];
int binary(int key,int ed);
int main()
{
    int m,n,i,j,k,l,cnt;
    while(scanf("%d %d",&m,&n)==2)
    {
        if(!m && !n)
            break;
        cnt=0;
        for(i=0; i<m; i++)
            scanf("%d",&ar[i]);
        for(i=0; i<n; i++)
            scanf("%d",&ar1[i]);
        for(i=0; i<n; i++)
            if(binary(ar1[i],m-1))
                cnt++;
        printf("%d\n",cnt);
    }
    return 0;
}
int binary(int key,int ed)
{
    int i;
    int flag=0;
    int beg=0,mid;
    for(; beg<=ed;)
    {
        mid=(beg+ed)/2;
        if(ar[mid]==key)
        {
            flag=1;
            break;
        }
        else if(ar[mid]>key)
            ed=mid-1;
        else if(ar[mid]<key)
            beg=mid+1;
    }
    if(flag==0)
        return 0;
    return 1;
}
