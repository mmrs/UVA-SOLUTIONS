#include<stdio.h>
#include<cstring>
#define B 'B'
#define W 'W'
#define A 'A'
#define T 'T'

int main()
{
    //freopen("in.txt","r",stdin);
    int t,m,i,j;
    int ar[100];
    char s[20];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        memset(ar,0,sizeof(ar));
        scanf("%d",&m);
        scanf("%s",s);
        j=m;
        for(j--; j>=0; j--)
            ar[s[j]]++;
        if(ar[B]>ar[W] && ar[W]==0 && ar[T]==0)
            printf("Case %d: BANGLAWASH\n",i);
        else if(ar[W]>ar[B] && ar[B]==0 && ar[T]==0)
            printf("Case %d: WHITEWASH\n",i);
        else if(ar[A]==m)
            printf("Case %d: ABANDONED\n",i);
        else if(ar[B]==ar[W])
            printf("Case %d: DRAW %d %d\n",i,ar[B],ar[T]);
        else if(ar[B]>ar[W])
            printf("Case %d: BANGLADESH %d - %d\n",i,ar[B],ar[W]);
        else if(ar[W]>ar[B])
            printf("Case %d: WWW %d - %d\n",i,ar[W],ar[B]);

    }
    return 0;
}
