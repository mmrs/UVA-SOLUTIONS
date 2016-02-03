#include<stdio.h>
#include<string.h>

int xx[] = {-1, 0, 0, 1};
int yy[] = {0,-1, 1, 0};

char ar[32][85],mark='#';

void dfs(int j,int k);

int main()

{
  //  freopen("in.txt","r",stdin);
    int i,j,k,l,t;
    scanf("%d\n",&t);
    while(t--)
    {
        i=0;
        while(gets(ar[i]))
        {
            if(ar[i][0]=='_')
                break;
            i++;
        }
        for(j=0; j<=i; j++)
        {
            l=strlen(ar[j]);
            for(k=0; k<l; k++)
            {
                if(ar[j][k]!=' ' && ar[j][k]!='_' &&  ar[j][k]!='X')
                {
                    ar[j][k]='#';
                    dfs(j,k);
                }
            }
        }
        for(j=0; j<=i; j++)
            puts(ar[j]);
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

        if(ar[x][y]==' ')
        {
            ar[x][y]=mark;
            dfs(x,y);

        }
    }
    return ;
}

