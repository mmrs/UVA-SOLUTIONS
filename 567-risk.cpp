#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<queue>
#include<vector>
#include<cstring>
#include<algorithm>   //sort swap  min
#include<set>
#include<sstream>   //cin  cout
#include<map>
#include<utility> // make_pair
#define inf  786

using namespace std;

int mat[22][22];

int main()

{

 //  freopen("G:\\Dropbox\\Uva\\in.txt","r",stdin);


    int i,j,k,n,cs=1,num,count;
    for(i=1; i<=20; i++)
        for(j=1; j<=20; j++)
        {
            if(i==j) mat[i][j]=0;
            else
            mat[i][j]=inf;
        }
    count=0;

    while(scanf("%d",&num)==1)
    {
        count++;

        while(num--)
        {
            scanf("%d",&n);
            mat[count][n]=1;
            mat[n][count]=1;
        }
        if(count==19)
        {
//            for(j=1; j<21; j++)
//            {
//                for(k=1; k<21; k++)
//                    printf("%3d ",mat[j][k]);
//                printf("\n");
//            }

            for(k=1; k<=20; k++)
            {
                for(i=1; i<=20; i++)
                {
                    for(j=1; j<=20; j++)
                        mat[i][j]=min(mat[i][j],(mat[i][k]+mat[k][j]));
                }
            }
            scanf("%d",&n);
            printf("Test Set #%d\n",cs++);
            for(k=1; k<=n; k++)
            {
                scanf("%d %d",&i,&j);
                printf("%2d to %2d: %d\n",i,j,mat[i][j]);
            }
            for(i=1; i<=20; i++)
                for(j=1; j<=20; j++)
                {
                   if(i==j) mat[i][j]=0;
                        else
                        mat[i][j]=inf;
                }
            count=0;
            printf("\n");
        }
    }

    return 0;

}
