#include<stdio.h>
#include<math.h>
#define SZ 10010
#define SZ2 1600
bool flag[SZ];
int prime[SZ2],cntar[10002],ovrchck[10005];
void sieve(void);
int main()
{
    sieve();
    int  a,b,i,j,flg;
    double tl,cnt=0,res,x,y;
for(i=0;i<=10000;i++)
{
    j=i*i+i+41;
    if(j<10010)
    {
        if(flag[j]==0)
        {
           cnt++;
           ovrchck[i]=1;
        }

    }
    else
    {
        b=sqrt(j)+2;
        a=0;
        flg=0;
        while(prime[a]<=b)
        {
            if(j%prime[a]==0)
            {
                flg=1;
                break;
            }
            a++;
        }
        if(flg==0)
        {
            cnt++;
            ovrchck[i]=1;
        }

    }
    cntar[i]=cnt;
}
    while(scanf("%d %d",&a,&b)==2)
    {

        tl=b-a+1.0;
        cnt=cntar[b]-cntar[a];
        if(ovrchck[a]==1)
            cnt+=1.0;
        res=cnt*100.0/tl+1.0e-7;
        printf("%.2lf\n",res);
    }
    return 0;
}
void sieve(void)
{
    int i, j, add,c=0;
    flag[0] = flag[1] = 1;
    prime[c++]=2;
    for(i = 4; i < SZ; i+=2)
        flag[i] = 1;
    for(i = 3; i < SZ; i+=2)
    {
        if(!flag[i])
        {
            prime[c++]=i;
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
