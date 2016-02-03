#include<stdio.h>
#include<iostream>
#include<cstring>

using namespace std;

char mark;
int xx[] = {-1, 0, 0, 1};
int yy[] = {0,-1, 1, 0};
char ar[21][21];
int cnt,m,n;

void dfs(int x,int y);

int main()

{
  // freopen("in.txt","r",stdin);
    int i,j,x,y,max;
    while(scanf("%d %d",&m,&n)==2)
    {
        for(i=0; i<m; i++)
            scanf("%s",ar[i]);
        scanf("%d %d",&x,&y);
        mark=ar[x][y];
        dfs(x,y);
        max=0;
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
                if(ar[i][j]==mark)
                {
                    cnt=0;
                    dfs(i,j);
                    if(cnt>max)
                        max=cnt;
                }
        }
        printf("%d\n",max);
    }
    return 0;
}
void dfs(int x,int y)
{
    // printf("tst..\n");
    int a,g,h;
    if(y<0)  y=n-1;
    if(y>=n) y=0;
    if(x<0 || x>=m)
        return;
    if(ar[x][y]!=mark)return;
    cnt++;
    ar[x][y]='!';
    for(a=0; a<4; a++)
    {
        g=x+xx[a];
        h=y+yy[a];
        dfs(g,h);

    }

    return ;
}

