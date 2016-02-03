#include<bits/stdc++.h>
#define sz 1010
using namespace std;

struct xy
{
    int x,y;
} data[sz];

struct xxx
{
    int u,v;
    double c;

    xxx(int i,int j,double cc)
    {
        u=i;
        v=j;
        c=cc;
    }
};
vector<xxx>vec;
int par[sz];
bool flag[sz],tee;
int nd,stt,limit;
double bus,train;
int find(int i)
{
    if(i==par[i])
        return i;
    else return par[i]=find(par[i]);
}
void ini(void)
{
    for(int i=1; i<=nd; i++)
        par[i]=i;

}
void link(int x,int y)
{
    //  printf("linked %d %d\n",x,y);
    if(x>y)
        par[x]=y;
    else par[y]=x;
}

void calculate_distance(void)
{
    for(int i=1; i<=nd; i++)
    {
        for(int j=i+1; j<=nd; j++)
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

    sort(vec.begin(),vec.end(),comp);
    int x,y,i,cnt=0;
    for(i=0; i<vec.size() && cnt<nd-1; i++)
    {

        x=find(vec[i].u);
        y=find(vec[i].v);
        if(x!=y)
        {
            cnt++;
            if(vec[i].c>limit)
            {
                train+=vec[i].c;
                stt++;
            }
            else
                bus+=vec[i].c;
            //   printf("cost %lf\n",vec[i].c);
            link(x,y);
        }
    }
}


int main()
{
    //freopen("in.txt","r",stdin);
    int i,j,k,x,y,cs,tst;
    scanf("%d",&tst);
    for(cs=1; cs<=tst; cs++)
    {
        scanf("%d %d",&nd,&limit);
        ini();
        vec.clear();
        memset(flag,0,sizeof flag);
        stt=1;
        tee=false;
        bus=train=0.0;
        for(i=1; i<=nd; i++)
            scanf("%d %d",&data[i].x,&data[i].y);
        calculate_distance();
        MST();
        printf("Case #%d: %d %.0lf %.0lf\n",cs,stt,bus,train);
    }

    return 0;
}

