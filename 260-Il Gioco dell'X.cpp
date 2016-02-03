#include<iostream>
#include<stdio.h>
#include<vector>
#include<cstring>
#include<algorithm>
#define sz 201
char ar[sz][sz];
using namespace std;
vector<int>ind;
void dfs(int i,int j,bool flg[][sz]);
int t;
int x[]= {-1,-1,0,0,1,1};
int y[]= {-1,0,-1,1,0,1};
int main()
{
    int a,i,j,s,flag,cnt=1,m;
    bool flg[sz][sz];
    while(cin>>t && t)
    {
        flag=0;
        for(i=0; i<t; i++)
            scanf("%s",&ar[i]);
        for(i=0;i<=0;i++)
        {
            for(j=0; j<t; j++)
            {
             memset(flg,0,sizeof(flg));
                if(ar[i][j]=='b')
                {
                    ind.clear();
                    dfs(i,j,flg);
                    s=ind.size();
                    sort(ind.begin(),ind.end());
                    if(ind[0]==0 && ind[s-1]==t-1)
                    {
                        flag=1;
                        break;
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
void dfs(int i,int j,bool flg[][sz])
{
    int a,b,c;

    if(i>=0 && j>=0 && i<t && j<t && ar[i][j]=='b' && flg[i][j]==0)
    {
        ind.push_back(i);
        flg[i][j]=1;
        for(a=0; a<6; a++)
        {
            b=i+x[a];
            c=j+y[a];
            dfs(b,c,flg);
        }
    }
    return;
}
