#include<stdio.h>
#include<iostream>
#include<cstring>
int par[30000];
int find(int i);
void funion(int i,int j);
int main()
{
    int t,n,m,i,k,j,ctzn,rltn,cnt,max;
    scanf("%d",&t);
    while(t--)
    {
        max=1;
        scanf("%d %d",&ctzn,&rltn);
        for(i=1;i<=ctzn;i++)
            par[i]=i;
        while(rltn--)
        {
            scanf("%d %d",&n,&m);
            funion(n,m);
        }
        for(i=1; i<=ctzn; i++)
            find(i);
             //for(i=1;i<=ctzn;i++)
               // printf("%d ",par[i]);
           //  printf("\n");
        for(i=1;i<=ctzn;i++)
        {
            cnt=1;
            for(j=i+1;j<=ctzn;j++)
            if(par[i]==par[j])
                cnt++;
            if(cnt>max)
                max=cnt;
        }
    printf("%d\n",max);

    }
    return 0;
}
int find(int i)
{
    if(par[i]==i)
        return i;
    else return(par[i]=find(par[i]));
}
void funion(int i,int j)
{
    int a,b;
    a=find(i);
    b=find(j);
    if(a!=b)
        par[b]=a;
    return;
}
