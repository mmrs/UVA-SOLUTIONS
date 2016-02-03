#include<stdio.h>
#include<stdlib.h>
#define inf 1<<29
#define sz 103
int dist[sz][sz];
int n;

void init(void)
{
    int i,j;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            dist[i][j]=inf;
            if(i==j)
                dist[i][j]=0;
        }
    }
}
void floyed_warshal(void)
{
    int i,j,k;
    for(k=1; k<=n; k++)
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                if(dist[i][j]>dist[i][k]+dist[k][j])
                    dist[i][j]=dist[i][k]+dist[k][j];


}

int main()
{
    int i,j,w,maax;
    char ar[6];
    while(scanf("%d",&n)==1)
    {
        init();
        for(i=2; i<=n; i++)
        {
            for(j=1; j<i; j++)
            {
                scanf("%s",ar);
                if(ar[0]=='x')
                    continue;
                w=atoi(ar);
                dist[i][j]=w;
                dist[j][i]=w;
            }
        }
        floyed_warshal();
        maax=0;
        for(i=2; i<=n; i++)
            if(dist[1][i]>maax)
                maax=dist[1][i];
        printf("%d\n",maax);

    }
    return 0;
}


