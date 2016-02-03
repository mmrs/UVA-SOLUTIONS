#include<stdio.h>
#include<cstring>
#include<set>
#include<algorithm>

using namespace std;

struct data
{

    int id,pal[11],solve[11],tl_pal,sub;
    set<int>s;

};


bool comp(data a,data b)
{
    if(a.s.size()==b.s.size())
    {
        if(a.tl_pal==b.tl_pal)

            return a.id<b.id;

        return (a.tl_pal<b.tl_pal);
    }
    return (a.s.size()>b.s.size());
}
data vec[102];
int main()
{
//freopen ("in.txt", "r", stdin);
    int t,i,j,k,l;
    int id,prb,pal;
    char ver,ar[250];
    scanf("%d\n",&t);
    while(t--)
    {
        for(i=0; i<101; i++)
        {

            memset(vec[i].pal,0,sizeof(vec[i].pal));
            memset(vec[i].solve,0,sizeof(vec[i].solve));
            vec[i].tl_pal=0;
            vec[i].sub=0;
            vec[i].s.clear();

        }
        while(gets(ar) && ar[0]!='\0')
        {
            sscanf(ar,"%d %d %d %c",&id,&prb,&pal,&ver);
            vec[id].id=id;
            vec[id].sub++;
            if(ver=='C')
            {
                if(!vec[id].solve[prb])
                {
                    vec[id].solve[prb]=1;
                    vec[id].tl_pal+=pal+(vec[id].pal[prb]*20);
                    vec[id].s.insert(prb);
                }
            }
            else if(ver=='I' && vec[id].solve[prb]==0)
                    vec[id].pal[prb]++;
        }
//        for(i=0;i<9;i++)
//            printf("%d ",vec[1].pal[i]);
//        printf("\n");
        sort(vec,vec+101,comp);
        for(i=0; i<101; i++)
        {
            if(vec[i].sub>0)
                printf("%d %d %d\n",vec[i].id,vec[i].s.size(),vec[i].tl_pal);
        }

        if(t>0)
            printf("\n");

    }

    return 0;
}
