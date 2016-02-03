#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<queue>
#include<vector>
#include<cstring>
#include<string.h>
#include<cstring>
#include<algorithm>
#define sz  10005
using namespace std;
int ar[sz];
void binary(int key,int ed);
int main()
{
#ifndef ONLINE_JUDGE
    //freopen("H:\\C_Codes\\input.txt","r",stdin);
#endif
    int n,q,pos,key,i,cs=1;
    while(scanf("%d %d",&n,&q)==2)
    {
        if(n==0 && q==0)
            break;
        for(i=0; i<n; i++)
            scanf("%d",&ar[i]);
        sort(ar,ar+n);
       // for(i=0; i<n; i++)
          // printf("%d ",ar[i]);
      //  printf("\n");
        printf("CASE# %d:\n",cs++);
        for(i=0; i<q; i++)
        {
            scanf("%d",&key);
            binary(key,n-1);
        }
    }
    return 0;
}
void binary(int key,int ed)
{
    int i;
    int flag=0;
    int beg=0,mid;
    for(; beg<=ed;)
    {
        mid=(beg+ed)/2;
        if(ar[mid]==key)
        {
            while(ar[mid]==key)
            mid--;
            flag=1;
            printf("%d found at %d\n",key,mid+2);
            break;
        }
        else if(ar[mid]>key)
            ed=mid-1;
        else if(ar[mid]<key)
            beg=mid+1;
    }
    if(flag==0)
        printf("%d not found\n",key);
    return;
}
