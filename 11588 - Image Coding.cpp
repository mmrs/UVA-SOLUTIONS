#include<stdio.h>
#include<algorithm>
#include<string.h>

using namespace std;

int main()
{
    int t,k,cnt[100],i,r,j,c,m,n,ans,chk;
    char ar[22][22];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d %d\n",&r,&c,&m,&n);
        for(j=0; j<r; j++)
            gets(ar[j]);
        memset(cnt,0,sizeof cnt);
        for(j=0; j<r; j++)
            for(k=0; k<c; k++)
                cnt[ar[j][k]]++;

        sort(cnt,cnt+100);
        chk=0;
        for(j=99; j>=72; j--)
            if(cnt[99]==cnt[j])
                chk++;
      //  printf("%d\n",chk);
        ans=cnt[99]*m*chk;
        m=(r*c)-(cnt[99]*chk);
        ans+=(m*n);
        printf("Case %d: %d\n",i,ans);
    }

    return 0;
}

