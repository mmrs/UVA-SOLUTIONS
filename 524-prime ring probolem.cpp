#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<queue>
#include<vector>
#include<cstring>
#include<algorithm>   //sort swap   min
#include<set>
#include<sstream>   //cin  cout
#include<map>
#include<utility> // make_pair
#define sz  100

using namespace std;
vector<int>res;
bool taken[20];
bool prime[]= {0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0};
int ar[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
int n;
bool check()
{
    int a;
    for(int i=0;i<res.size()-1;i++)
    {
        a=res[i];
        a+=res[i+1];
        if(prime[a]==0)
            return false;
        if(res.size()==n)
        {
            if(prime[res[0]+res[n-1]]==0)
            return false;
        }

    }
    return true;
}
void backtrack()
{

    if(res.size()==n)
    {
        printf("%d",res[0]);
        for(int i=1;i<n;i++)
            printf(" %d",res[i]);
        printf("\n");
        return;
    }

    for(int i=1; i<n ; i++)
    {
        if(taken[i]==0)
        {
            taken[i]=1;
            res.push_back(ar[i]);
            if(check())
                backtrack();

            taken[i]=0;
            res.pop_back();
        }
    }
    return;
}
int main()

{
#ifndef ONLINE_JUDGE
//freopen("G:\\Dropbox\\MY CODES\\Uva\\in.txt","r",stdin);
#endif
    int i,k,l,cs=1;
    bool flag=true;

    while(scanf("%d",&n)==1)
    {
        if(flag==false)
            printf("\n");
        flag=false;
        res.clear();
     //   memset(taken,0,sizeof taken);
        printf("Case %d:\n",cs++);
        res.push_back(1);
        backtrack();

    }
    return 0;
}
