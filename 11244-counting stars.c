#include<stdio.h>
int main()
{
    int a,b,i,j,count;
    char ar[102][102];
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0 &&b==0)
            break;
        int flag[102][102]= {0};
        count=0;
        for(i=1; i<=a; i++)
            scanf("%s",ar[i]);
        for(i=1; i<=a; i++)
            for(j=0; j<b; j++)
                if(ar[i][j]=='*')
                    flag[i-1][j-1]=flag[i-1][j]=flag[i-1][j+1]=
                    flag[i+1][j]=flag[i][j-1]=flag[i+1][j-1]=flag[i+1][j+1]=flag[i][j+1]=1;
        for(i=1; i<=a; i++)
            for(j=0; j<b; j++)
                if(flag[i][j]==0 && ar[i][j]=='*')
                    count++;
        printf("%d\n",count);
    }
    return 0;
}
