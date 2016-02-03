#include<bits/stdc++.h>
using namespace std;

int prime[400];
bool flag[1005];
int ans[1000005];
int xx;
void sieve(void)
{
    int c=0,add,i,j;
    prime[c++]=2;
    for( i=4; i<1005; i+=2)           // Sieve
        flag[i]=1;
    for( i=3; i<1005; i+=2)
    {
        if(flag[i]==0)
        {
            prime[c++]=i;
            if(1005/i>=i)
            {
                add=i*2;
                for(j=i*i; j<1005; j+=add)
                    flag[j]=1;
            }
        }
    }
    return ;
}
int nod(int n)
{
    int i,k,x,cnt,ans=1;               // sigma O

    x=n;
    for(k=0; prime[k]<=sqrt(x); k++)
    {
        cnt=0;
        if(x%prime[k]==0)
        {
            while(x%prime[k]==0)
            {
                cnt++;
                x/=prime[k];
            }
            ans*=(cnt+1);
        }

    }
    if(x>1)
        ans*=2;

    return ans;
}
int binary(int key)
{
    int mid,i,j,k,low=0,up=xx;    // Binary search lower bound
    while(low<=up)
    {
        mid=(low+up)/2;
        if(ans[mid]<key)
            low=mid+1;
        else up=mid-1;
    }
    return low;
}
int main()
{
    sieve();
    //  for(int i = 0; i<25; i++) printf(" %d ",prime[i]);

    ans[xx++]=1;
    ans[xx++]=2;
    for(int i = 2; ans[i-1]<1000005; i++)
        ans[xx++]=ans[i-1] + nod(ans[i-1]);
    int t,x,y,i,a,b,ans2;

    //  for(i=0;i<7;i++)printf("%d te %d\n",i,ans[i]);
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d",&x,&y);
        a=binary(y);
        b=binary(x);
        //  printf("loc of X= %d Loc of Y=%d\n",b,a);
        ans2=a-b+1;
        if(ans[a]>y)
            ans2--;
        if(ans[b])

            printf("Case %d: %d\n",i,ans2);

    }

    return 0;
}
