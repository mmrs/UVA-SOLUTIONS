#include<stdio.h>
#define max(a,b) a>b?a:b
#define min(a,b) a>b?b:a
#define inf 1<<29

int mat[102][102];

void ini(int ppl)
{
    int i,j;
    for(i=0; i<ppl; i++)
        for(j=0; j<ppl; j++)
        {
            mat[i][j]=inf;
            if(i==j)
                mat[i][j]=0;
        }
}

void floyd(int ppl)
{

    int i,j,k;

    for(k=0; k<ppl; k++)
        for(j=0; j<ppl; j++)
            for(i=0; i<ppl; i++)
                mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);

}
int main()
{
    int ppl,i,u,v,mx,tst,cs,e,s,root;
    scanf("%d",&tst);
    for(cs=1; cs<=tst; cs++)
    {
        scanf("%d",&ppl);
        scanf("%d",&e);
        ini(ppl);
        for(i=1; i<=e; i++)
        {
            scanf("%d %d",&u,&v);
            mat[u][v]=1;
            mat[v][u]=1;
        }
        scanf("%d %d",&root,&s);
        floyd(ppl);
        mx=0;
        for(i=0; i<ppl; i++)
            mx=max(mx,mat[root][i]+mat[i][s]);

        printf("Case %d: %d\n",cs,mx);
    }

    return 0;
}

