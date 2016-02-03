#include<stdio.h>
#include<vector>
#include<algorithm>
#include<stdlib.h>
using namespace std;
struct mod
{
    int x;
    int m;

    mod(int a,int b)
    {
        x=a;
        m=b;
    }

};
vector<mod>ans;
int modu;

int comp(mod a,mod b)
{
    if(a.m==b.m)
    {
        int x,y;
        x=abs(a.x)%2;
        y=abs(b.x)%2;
        if(x==0 && y==1)
            return 0;
        if(x==1 && y==0)
            return 1;
        if(x==0 && y==0)
            return a.x<b.x;
        if(x==1 && y==1)
            return b.x<a.x;
    }
    return a.m<b.m;

}

int main()
{
  //  freopen("in.txt","r",stdin);
    int num,x,i,l;
    while(~scanf("%d %d",&num,&modu))
    {
        if(num==0 && modu==0)
        {
            printf("0 0\n");
            break;
        }
        l=num;
        ans.clear();
        while(l--)
        {
            scanf("%d",&x);
            ans.push_back(mod(x,x%modu));
        }
        sort(ans.begin(),ans.end(),comp);
        printf("%d %d\n",num,modu);
        for(i=0; i<ans.size(); i++)
            printf("%d\n",ans[i].x);
    }
    return 0;
}
