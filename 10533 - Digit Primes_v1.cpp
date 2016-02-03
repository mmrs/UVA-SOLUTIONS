#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#define SZ 1000001

bool flag[SZ];
int digitprime[SZ];
using namespace std;
void seive(void);
void digprm(void);
int main()

{
#ifndef ONLINE_JUDGE
//freopen("H:\\C_Codes\\input.txt","r",stdin);
#endif
    seive();
    digprm();
    int t,x,y,cnt,z,dig;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&x,&y);
        cnt=digitprime[y]-digitprime[x];
        dig=0;
        z=x;
        while(z)
        {
            dig+=z%10;
            z/=10;
        }
        if(flag[x]==0 && flag[dig]==0)
            cnt++;
        printf("%d\n",cnt);
    }
    return 0;
}
void seive(void)
{
    int i, j, add;
    flag[0] = flag[1] = 1;
    for(i = 4; i <SZ; i+=2)
        flag[i] = 1;
    for(i = 3; i <SZ; i+=2)
    {
        if(!flag[i])
        {
            if(SZ/i >= i)
            {
                add = i * 2;
                for(j = i * i; j < SZ; j += add)
                    flag[j] = 1;
            }
        }
    }
    return;
}
void digprm(void)
{
    memset(digitprime,0,sizeof(digitprime));
    int i,j,k,z,cnt;
    cnt=0;
    for(i=0; i<SZ; i++)
    {
        z=i;
        k=0;
        while(z)
        {
            k+=z%10;
            z/=10;
        }
        if(flag[i]==0 && flag[k]==0)
            ++cnt;
        digitprime[i]=cnt;
    }
    return;
}
