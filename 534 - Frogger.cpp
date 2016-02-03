#include<stdio.h>
#include<math.h>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

struct node
{
    int x,y;
}data[202];
int main()
{
    int i,j,cs=1,n,k;
    double tmp,dis,dist_mat[202][202];
    while(scanf("%d",&n) && n)
    {
        for(i=1; i<=n; i++)
            scanf("%d %d",&data[i].x,&data[i].y);
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                dis=((data[i].x-data[j].x)*(data[i].x-data[j].x))
                    +((data[i].y-data[j].y)*(data[i].y-data[j].y));

                dis=sqrt(dis);
                if(i==j)
                    dist_mat[i][j]=0.0;
                else
                    dist_mat[i][j]=dis;

            }
        }
        for(k=1; k<=n; k++)
            for(j=1; j<=n; j++)
                for(i=1; i<=n; i++)
                {
                    tmp=max(dist_mat[i][k],dist_mat[k][j]);
                    dist_mat[i][j]=min(dist_mat[i][j],tmp);
                }
        printf("Scenario #%d\nFrog Distance = %0.3lf\n\n",cs++,dist_mat[1][2]);

    }
    return 0;
}
