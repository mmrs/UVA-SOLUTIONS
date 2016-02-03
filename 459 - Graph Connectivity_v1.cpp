#include<stdio.h>
#include<iostream>
#include<cstring>
#define sz 30
using namespace std;
bool mat[sz][sz],num[sz];
int m;
void dfs(int i);
int main()
{

    int tst,i,j,k,l,cnt;
    char q,st[3];

    scanf("%d\n\n",&tst);
    while(tst--)
    {
        cin>>q;
        getchar();
        m=q-'A'+1;
        cnt=0;
        memset(mat,0,sizeof(mat));
        memset(num,0,sizeof(num));
          for(i=1;i<=m;i++)
            mat[i][i]=1;
        while(gets(st))
        {
            if(strlen(st)==0)
                break;
            mat[st[0]-'A'+1][st[1]-'A'+1]=1;
            mat[st[1]-'A'+1][st[0]-'A'+1]=1;
        }

        for(i=1; i<=m; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(mat[i][j]==1)
                {
                     cnt++;
                    dfs(i);

                }
            }
        }
        cout<<cnt<<endl;
        if(tst>0)
            cout<<endl;
    }
    return 0;
}
void dfs(int i)
{
    if(num[i]==1)
        return;
        num[i]=1;
        for(int j=1; j<=m; j++)
        {
            if(mat[i][j]==1)
            {
                mat[i][j]=0;
                dfs(j);
            }
        }
    return;
}
