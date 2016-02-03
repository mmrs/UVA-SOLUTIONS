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
#define sz  2001
#define sz1 150

using namespace std;
void seive(void);
int prime[sz1];
int prm(int a);
int flag[sz]= {0},c=0;
int main()

{
    int t,l,k,i,j,flag;
#ifndef ONLINE_JUDGE
//freopen("H:\\C_Codes\\input.txt","r",stdin);
#endif
    seive();
    //for(i=0; i<c; i++)
       // printf("%d ",prime[i]);
 //   printf("\n");
    char ar[2001],ch;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        flag=0;
        scanf("%s",ar);
        l=strlen(ar);
        sort(ar,ar+l);
        //   printf("%s\n",ar);
        printf("Case %d: ",i);
        for(j=0; j<l;)
        {
            k=j;
            ch=ar[k];
            while(ar[k]==ar[j])
                j++;
            // printf("%c %d\n",ch,j-k);
            if(prm(j-k)==1)
            {
                printf("%c",ch);
                flag=1;
            }
        }
        if(flag==0)
            printf("empty\n");
        else printf("\n");
    }
    return 0;

}
int prm(int a)
{
    int flag=0,i;
    for(i=0; i<c; i++)
    {
        if(prime[i]==a)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        return 1;
    else return 0;
}
void seive (void)
{
    int i,j;
    prime[c++]=2;
    for(i=4; i<sz; i+=2)
        flag[i]=1;
    for(i=3; i<sz; i+=2)
    {
        if(flag[i]==0)
        {
            prime[c++]=i;
        }
        for(j=i*i; j<sz; j+=(i*2))
            flag[j]=1;
    }
    return;
}

