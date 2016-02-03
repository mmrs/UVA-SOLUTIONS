#include<stdio.h>
#include<map>

using namespace std;

map<long int,long int>st;               //can use multi set instead of map. for details: cplusplus.com
map<long int,long int>:: iterator its,ite;
int main()

{
  //  freopen("in.txt","r",stdin);
    long int t,cnt,a,b,n,m;
    while(scanf("%ld",&t)&&t)
    {
        st.clear();
        cnt=0;
        while(t--)
        {
            scanf("%ld",&n);
            while(n--)
            {
                scanf("%ld",&m);
                st[m]++;
            }
            ite=st.end();
            ite--;
            a=ite->first;
            st[a]--;
            if(st[a]==0)st.erase(ite);
            its=st.begin();
            b=its->first;
            st[b]--;
            if(st[b]==0)st.erase(its);
            cnt=cnt+a-b;
       //     printf("%d %d\n",a,b);

        }
        printf("%ld\n",cnt);
    }
return 0;

}
