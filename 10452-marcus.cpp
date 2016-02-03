#include<stdio.h>

char ans[]= {"IEHOVA#"};
char ar[20][10];
int flag;


void call(int m,int n,int fix)

{
    if(fix==7)
        return;

    if(flag==1)
        printf(" ");
        flag=1;

    if(ar[m][n-1]==ans[fix])
    {
        printf("left");
        call(m,n-1,fix+1);
    }
    else if(ar[m][n+1]==ans[fix])
    {
        printf("right");
        call(m,n+1,fix+1);
    }
    else if(ar[m-1][n]==ans[fix])
    {
        printf("forth");
        call(m-1,n,fix+1);
    }

}


int main()
{
   // freopen("in.txt","r",stdin);
    int t,i,fix,m,n;
    scanf("%d",&t);
    while(t--)
    {
        flag=0;
        scanf("%d %d\n",&m,&n);
        for(i=0; i<m; i++)
            gets(ar[i]);
        for(i=0; i<n; i++)
            if(ar[m-1][i]=='@')
                break;
        fix=0;
        call(m-1,i,fix);
        printf("\n");

    }

    return 0;
}
