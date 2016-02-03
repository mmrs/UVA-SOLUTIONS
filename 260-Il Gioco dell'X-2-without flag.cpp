#include<iostream>
#include<stdio.h>
#include<vector>
#define sz 201
char ar[sz][sz];
void dfs(int i,int j);
using namespace std;
int t;
int x[]= {-1,-1,0,0,1,1};
int y[]= {-1,0,-1,1,0,1};
int main()
{
    int i,j,s,flag,cnt=1;
    while(cin>>t && t)
    {
        flag=0;
        for(i=0; i<t; i++)
            scanf("%s",&ar[i]);
        for(i=0; i<=0; i++)
        {
            for(j=0; j<t; j++)
            {
                if(ar[i][j]=='b')
                {
                    dfs(i,j);
                    for(s=0; s<t; s++)
                    {
                        if(ar[t-1][s]=='.')
                        {
                            flag=1;
                            break;
                        }
                    }
                }
            }
            if(flag==1)
                break;
        }
        if(flag==1)
            printf("%d B\n",cnt++);
        else printf("%d W\n",cnt++);
    }
    return 0;
}
void dfs(int i,int j)
{
    int a,b,c;
    if(i>=0 && j>=0 && i<t && j<t && ar[i][j]=='b')
    {
        ar[i][j]='.';
        for(a=0; a<6; a++)
        {
            b=i+x[a];
            c=j+y[a];
            dfs(b,c);
        }
    }
    return;
}
