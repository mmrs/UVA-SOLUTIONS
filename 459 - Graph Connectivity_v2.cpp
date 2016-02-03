#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int m,par[30];
int find(int i)
{
    if(par[i]==i)
        return i;
    return(par[i]=find(par[i]));
}
void funion(int a,int b)
{
    int i,j;
    i=find(a);
    j=find(b);
    if(i!=j)
        par[i]=j;
    return;
}
int main()
{
    int tst,i,j,k,l,i1,i2,cnt;
    char q,st[4];
    scanf("%d\n\n",&tst);
    while(tst--)
    {
        cin>>q;
        getchar();
        m=q-64;
        cnt=0;
        memset(par,0,sizeof(par));
        for(i=1; i<=m; i++)
            par[i]=i;
        while(gets(st))
        {
            if(strlen(st)==0)
                break;
            i1=st[0]-64;
            i2=st[1]-64;
            funion(i1,i2);
        }
        for(i=1; i<=m; i++)
            find(i);
        for(i=1; i<=m; i++)
            if(par[i]==i)
                cnt++;
        cout<<cnt<<endl;
        if(tst>0)
            cout<<endl;
    }
    return 0;
}
