#include <cstdio>
#include <iostream>
#include<map>
#include<cstring>
using namespace std;
map<string,int>mmrs;

int par[100005],val[100005];
int find(int a)
{
    if(par[a]==a)
        return a;
    else return(par[a]=find(par[a]));
}
int main()
{
    int t,c,i,j,k,ind;
    char n1[21],n2[21];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&c);
        ind=-1;
        mmrs.clear();
        while(c--)
        {
            scanf("%s %s",&n1,&n2);

            if(mmrs.find(n1)==mmrs.end())
            {
                mmrs[n1]=++ind;
                par[ind]=ind;
                val[ind]=1;

            }
            if(mmrs.find(n2)==mmrs.end())
            {
                mmrs[n2]=++ind;
                par[ind]=ind;
                val[ind]=1;
            }
            i=find(mmrs[n1]);
            j=find(mmrs[n2]);
            if(i!=j)
            {
                par[i]=j;
                val[j]+=val[i];
            }
            printf("%d\n",val[j]);
        }
    }
    return 0;
}
