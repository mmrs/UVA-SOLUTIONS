#include<stdio.h>
#include<math.h>
#include<algorithm>
#define inf 1<<28

using namespace std;
struct node
{
    int x,y;
};

int main()
{
   // freopen("in.txt","r",stdin);
    int tst,i,j,cs,n,k;
    bool chk=true;
    scanf("%d",&tst);
    for(cs=1; cs<=tst; cs++)
    {
        scanf("%d",&n);
        node data[n+2];

        for(i=1; i<=n; i++)
            scanf("%d %d",&data[i].x,&data[i].y);

        double dist_mat[n+2][n+2];
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                double dis=((data[i].x-data[j].x)*(data[i].x-data[j].x))
                           +((data[i].y-data[j].y)*(data[i].y-data[j].y));

                dis=sqrt(dis);
                if(i==j)
                    dist_mat[i][j]=0.0;
                else if(dis<=10.0)
                    dist_mat[i][j]=dis;
                else
                    dist_mat[i][j]=inf;
            }
        }

        for(k=1; k<=n; k++)
            for(j=1; j<=n; j++)
                for(i=1; i<=n; i++)
                    dist_mat[i][j]=min(dist_mat[i][j],dist_mat[i][k]+dist_mat[k][j]);

        double mx=0.0;

        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                mx=max(mx,dist_mat[i][j]);
                if(chk==false)
                    printf("\n");
                chk=false;
        printf("Case #%d:\n",cs);
        if(mx>((inf)-10))
            printf("Send Kurdy\n");
        else printf("%0.4lf\n",mx);

    }

    return 0;
}
