#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<queue>
#include<vector>
#include<cstring>
#include<algorithm>   //sort swap   min
#include<set>
#include<sstream>   //cin  cout
#include<map>
#include<utility> // make_pair
#define SZ 500
using namespace std;
bool flag[501];
void sieve(void);
int divisor[10005];
int main()

{
    sieve();
//freopen("G:\\Dropbox\\uva\\in.txt","r",stdin);
    int i,j,k,a,cnt,x;
    bool check;
    bool check_print;
    for(i=1; i<=10003; i++)
    {
        cnt=0;
        x=sqrt(i);
        for(j=1; j<=x; j++)
        {
            if(i%j==0)
            {
                cnt++;
                if(i/j!=j)
                    cnt++;
            }
        }
        divisor[i]=cnt;
    }
    divisor[0]=0;

    //for(i=1;i<30;i++)printf("number of divisor of %d is %d\n",i,divisor[i]);
    scanf("%d",&a);
    while(a--)
    {
        scanf("%d %d",&j,&k);
         check_print=check=true;
        for(i=j;i<=k;i++)
        {
            if(!flag[divisor[i]])
            {
                if(check_print==false)
                    printf(" ");
                printf("%d",i);
                check=check_print=false;
            }

        }
        if(check==true)printf("-1");
        printf("\n");
    }

    return 0;
}
void sieve(void)
{
    int i, j, add;
    flag[0] = flag[1] = 1;
    for(i = 4; i < SZ; i+=2)
        flag[i] = 1;
    for(i = 3; i < SZ; i+=2)
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
