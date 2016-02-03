#include<stdio.h>
#define min(a,b) a>b?b:a
#define inf 1<<29

int mat[22][22];

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

    int i,j,k;

    for(k=1; k<=ppl; k++)
        for(j=1; j<=ppl; j++)
            for(i=1; i<=ppl; i++)
                mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);

}
int main()
{
    int ppl,i,j,u,v,w,mn,sum,indx,cs=1,e;
    char data[22][30];
    while(scanf("%d %d",&ppl,&e)==2)
    {
        if(ppl==0 && e==0)break;
        ini(ppl);
        for(i=1; i<=ppl; i++)
            scanf("%s",data[i]);
        for(i=1; i<=e; i++)
        {
            scanf("%d %d %d",&u,&v,&w);
            mat[u][v]=w;
            mat[v][u]=w;
        }
        floyd(ppl);
        mn=inf;
        for(i=1; i<=ppl; i++)
        {
            sum=0;
            for(j=1; j<=ppl; j++)
                sum+=mat[j][i];

            if(mn>sum)
            {
                mn=sum;
                indx=i;
            }

        }
        printf("Case #%d : %s\n",cs++,data[indx]);
    }

return 0;
}
