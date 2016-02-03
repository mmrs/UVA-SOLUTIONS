#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
#define SZ 101
using namespace std;
vector<char>v;
char grid[SZ][SZ];
int m,n,cnt;
int x[]= {-1,0,0,1};
int y[]= {0,-1,1,0};
void dfs(int i,int j);
int main()
{
    int u,t,i,j,k,flag;
    char l;
    scanf("%d",&t);
    for(u=1;u<=t;u++)
    {
        cnt=0;
        v.clear();
        cin>>m;
        for(i=0; i<m; i++)
            scanf("%s",&grid[i]);
        for(i=0; i<m; i++)
        {
            for(j=0; j<m; j++)
            {
                flag=0;

                if(grid[i][j]=='x' || grid[i][j]=='@')
                {
                    dfs(i,j);
                    k=v.size();
                    while(!v.empty())
                    {
                    l=v[--k];
                        v.pop_back();
                        if(l=='x')
                            flag=1;
                    }
                    if(flag==1)
                        cnt++;
                }
            }
        }
        cout<<"Case "<<u<<": "<<cnt<<endl;
    }
    return 0;
}
void dfs(int i,int j)
{
    int a,b,c;

    if(i<m && j<m && i>-1 && j>-1)
    {
        if(grid[i][j]=='x' || grid[i][j]=='@')
        {
            v.push_back(grid[i][j]);
            grid[i][j]='.';
            for(a=0; a<4; a++)
            {
                b=i+x[a];
                c=j+y[a];
                dfs(b,c);
            }
        }
    }
    return;
}
