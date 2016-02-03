#include<stdio.h>
#include<string.h>

int xx[] = {-1, 0, 0, 1};
int yy[] = {0,-1, 1, 0};

char ar[32][85],mark;
bool col[32][85];

void dfs(int j,int k);

int main()

{
  //  freopen("in.txt","r",stdin);
    int i=0,j,k,l;
    bool chk=true;
    while(gets(ar[i]))
    {
        if(ar[i][0]=='_')
        {
            getchar();
            if(chk==false)
                puts("");
            chk=false;
            for(j=0; j<=i; j++)
            {
                l=strlen(ar[j]);
                for(k=0; k<l; k++)
                {
                    if(ar[j][k]!=' ' && ar[j][k]!='_' &&  ar[j][k]!='X' && col[j][k]==0)
                    {
                        mark=ar[j][k];
                        dfs(j,k);
                    }
                }
            }
            for(j=0; j<=i; j++)
                puts(ar[j]);
                i=0;
            memset(col,0,sizeof col);
        }
        else i++;
    }
    return 0;
}

void dfs(int j,int k)
{

    int a,x,y;

    for(a=0; a<4; a++)
    {
        x=j+xx[a];
        y=k+yy[a];

        if(ar[x][y]==' ' && col[x][y]==0)
        {
            ar[x][y]=mark;
            col[x][y]=1;
            dfs(x,y);

        }
    }
    return ;
}
