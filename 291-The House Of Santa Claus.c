#include<stdio.h>
int mat[6][6];
int ans[11];

void back_track(int pos,int cnt)
{
    int i;
    ans[cnt]=pos;
    if(cnt==9)
    {
        for(i=1; i<=9; i++)
            printf("%d",ans[i]);
        printf("\n");
        return;
    }
    for(i=1;i<=5;i++)
    {
        if(mat[pos][i]==1)
        {
            mat[pos][i]=mat[i][pos]=0;
            back_track(i,cnt+1);
            mat[pos][i]=mat[i][pos]=1;
        }
    }
}


int main()
{
    int i,j;
    for(i=1; i<=5; i++)
        for(j=1; j<=5; j++)
            mat[i][j]=0;

    mat[1][2]=mat[1][3]=mat[1][5]=1;
    mat[2][1]=mat[2][3]=mat[2][5]=1;
    mat[3][1]=mat[3][2]=mat[3][4]=mat[3][5]=1;
    mat[4][5]=mat[4][3]=1;
    mat[5][1]=mat[5][2]=mat[5][3]=mat[5][4]=1;
    back_track(1,1);
    return 0;

}

