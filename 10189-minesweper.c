#include<stdio.h>
int main()
{
    int a,b,i,k=1,j;
    char ar[102][102];
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0 && b==0)break;
        int out[102][102]= {0};
        for(i=1; i<=a; i++)
            scanf("%s",ar[i]);
        for(i=1; i<=a; i++)
            for(j=0; j<b; j++)
            {
                if(ar[i][j]=='*')
                {
                    out[i-1][j]++;
                    out[i-1][j-1]++;
                    out[i-1][j+1]++;
                    out[i][j-1]++;
                    out[i][j+1]++;
                    out[i+1][j]++;
                    out[i+1][j+1]++;
                    out[i+1][j-1]++;
                }
            }if(k!=1)printf("\n");
        printf("Field #%d:\n",k++);
        for(i=1; i<=a; i++)
        {
            for(j=0; j<b; j++)
            {
                if(ar[i][j]=='*')
                    printf("%c",ar[i][j]);
                else printf("%d",out[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
