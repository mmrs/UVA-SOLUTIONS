#include<stdio.h>
#define inf 1<<29
#define sz 15
int dist[sz][sz],path[sz][sz];
int n,e;

void init(void)
{
    int i,j;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            path[i][j]=0;
            dist[i][j]=inf;
            if(i==j)dist[i][j]=0;
        }
    }
}
void floyed_warshal(void)
{
    int i,j,k;
    for(k=1; k<=n; k++)
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(dist[i][j]>dist[i][k]+dist[k][j])
                {
                    dist[i][j]=dist[i][k]+dist[k][j];
                    path[i][j]=path[k][j];
                }

            }
        }
    }
}

void print_path(int s,int e)
{
    if(path[s][e]==s)
    {
        printf("%d",path[s][e]);
        return;
    }

    else
    {
        print_path(s,path[s][e]);
        printf(" %d",path[s][e]);
    }
}

int main()
{
    int i,j,u,v,w,s,e,cs=1;
    while(scanf("%d",&n) && n)
    {
        init();
        for(i=1; i<=n; i++)
        {
            scanf("%d",&s);
            for(j=1; j<=s; j++)
            {
                scanf("%d %d",&v,&w);
                dist[i][v]=w;
            }
        }
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(dist[i][j]!=inf && i!=j)
                    path[i][j]=i;
            }
        }
        floyed_warshal();
        scanf("%d %d",&s,&e);
        printf("Case %d: Path = ",cs++);
        print_path(s,e);
        printf(" %d; ",e);
        printf("%d second delay\n",dist[s][e]);
    }
    return 0;
}

