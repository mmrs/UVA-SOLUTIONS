#include<bits/stdc++.h>
#define sz 100003
using namespace std;

struct xy
{
long long x,y;
} data[sz];

struct xxx
{
    long long u,v;
    double c;

    xxx(long long i,long long j,double cc)
    {
        u=i;
        v=j;
        c=cc;
    }
};
vector<xxx>vec;
vector<long long>edgeno;
long long par[sz];
long long nd,transmiter;
long long find(long long i)
{
    if(i==par[i])
        return i;
    else return par[i]=find(par[i]);
}
void ini(void)
{
    for(long long i=1; i<=nd; i++)
        par[i]=i;

}
void link(long long x,long long y)
{
    if(x>y)
        par[x]=y;
    else par[y]=x;
}

void calculate_distance(void)
{
    for(long long i=0; i<nd; i++)
    {
        for(long long j=i+1; j<nd; j++)
        {
            double dis=((data[i].x-data[j].x)*(data[i].x-data[j].x))+
                       ((data[i].y-data[j].y)*(data[i].y-data[j].y));

            dis=sqrt(dis);
            vec.push_back(xxx(i,j,dis));
        }
    }
}
int comp(xxx a,xxx b)
{
    return a.c<b.c;
}

void MST(void)
{

  //  printf("vec %d\n",vec.size());
    sort(vec.begin(),vec.end(),comp);
    long long x,y,i,cnt=0;
    for(i=0; i<vec.size() && cnt<nd-1; i++)
    {

        x=find(vec[i].u);
        y=find(vec[i].v);
        if(x!=y)
        {
            link(x,y);
            cnt++;
            edgeno.push_back(i);
        //    printf("%0.lf\n",vec[i].c);

        }
    }
}

int main()
{
   // freopen("in.txt","r",stdin);
    long long i,j,k,x,y,cs,tst;
    scanf("%lld",&tst);
    for(cs=1; cs<=tst; cs++)
    {
        scanf("%lld",&transmiter);
        nd=0;
        while(scanf("%lld",&data[nd].x)==1)
        {
            if(data[nd].x==-1)break;
            scanf("%lld",&data[nd].y);
            nd++;
        }
        ini();
        vec.clear();
        edgeno.clear();
     //  printf("nd= %d\n",nd);
        if(transmiter>nd-1)
            printf("0\n");
        else
        {
        calculate_distance();
        MST();
      //  printf("%d\n",edgeno.size());
        printf("%d\n",(int)ceil(vec[edgeno[nd-1-transmiter]].c));
        }
    }

    return 0;
}

