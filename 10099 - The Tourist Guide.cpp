#include<stdio.h>
#include<math.h>
#define min(a,b) a>b?b:a
#define max(a,b) a>b?a:b
#define inf -1

int mat[103][103];

void ini(int ppl)
{
    int i,j;
    for(i=1; i<=ppl; i++)
        for(j=1; j<=ppl; j++)
        {
            mat[i][j]=inf;
            if(i==j)
                mat[i][j]=0;
        }
}

void floyd(int ppl)
{

    int i,j,k,tmp;

    for(k=1; k<=ppl; k++)
        for(j=1; j<=ppl; j++)
            for(i=1; i<=ppl; i++)
            {
                tmp=min(mat[i][k],mat[k][j]);
                mat[i][j]=max(mat[i][j],tmp);
            }

}
int main()
{
    int ppl,i,j,u,v,w,cs=1,e;
    while(scanf("%d %d",&ppl,&e)==2)
    {
        if(ppl==0 && e==0)break;
        ini(ppl);
        for(i=1; i<=e; i++)
        {
            scanf("%d %d %d",&u,&v,&w);
            mat[u][v]=w-1;
            mat[v][u]=w-1;
        }
        scanf("%d %d %d",&u,&v,&w);
        floyd(ppl);
        ppl=ceil((double)w/(mat[u][v]));
        printf("Scenario #%d\nMinimum Number of Trips = %d\n\n",cs++,ppl);
    }

    return 0;
}
