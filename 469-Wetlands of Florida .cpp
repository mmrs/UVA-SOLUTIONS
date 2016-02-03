#include<stdio.h>
#include<iostream>
#include<cstring>
#define sz 99
using namespace std;
bool flag[sz][sz];
int cnt;
char ar[sz][sz];
int xx[]= {-1,-1,-1,0,0,1,1,1};
int yy[]= {-1,0,1,-1,1,-1,0,1};
void dfs(int i,int j);
int main()
{
    int t,i,j,k,l;
    char nm[6],n1[3],n2[3];
    scanf("%d\n\n",&t);
    while(t--)
    {
        // getchar();
        gets(ar[0]);
        l=strlen(ar[0]);
        for(i=1; i<l; i++)
            gets(ar[i]);
        while(gets(nm))
        {
            if(strlen(nm)==0)
                break;
            cnt=0;
            memset(flag,0,sizeof(flag));
            sscanf(nm,"%d %d",&i,&j);
            if(ar[i-1][j-1]=='W')
                dfs(i-1,j-1);
            printf("%d\n",cnt);
        }
        if(t>0)
            printf("\n");
    }
    return 0;
}
void dfs(int i,int j)
{
    int a,b;
    if(ar[i][j]=='W' && i>=0 && i<99 && j>=0 && j<99 && flag[i][j]==0)
    {
        flag[i][j]=1;
        cnt++;
        for(int k=0; k<8; k++)
        {
            a=i+xx[k];
            b=j+yy[k];
            dfs(a,b);
        }
    }
    return;
}
