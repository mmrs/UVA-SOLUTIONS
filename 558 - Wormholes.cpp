#include<stdio.h>
#define min_me(a,b) a>b?b:a
#define sz 1002
#define inf 1<<30

struct node
{
    int f,t,c;
}data[sz*2];
int dist[sz];
int n,e;
int bellmanford(void)
{
    int i,j;
    dist[0]=0;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<e; j++)
            dist[data[j].t]=min_me(dist[data[j].t],dist[data[j].f]+data[j].c);
    }
        for(j=0; j<e; j++)
            if(dist[data[j].t]>dist[data[j].f]+data[j].c)
                return 1;

            return 0;
}

void ini(void)
{
    int i;
    for(i=0; i<=n; i++)
        dist[i]=inf;
}
int main()
{
    int t,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&e);
        ini();
        for(i=0; i<e; i++)
            scanf("%d %d %d",&data[i].f,&data[i].t,&data[i].c);
        if(bellmanford())
            printf("possible\n");
        else printf("not possible\n");
    }

    return 0;
}
