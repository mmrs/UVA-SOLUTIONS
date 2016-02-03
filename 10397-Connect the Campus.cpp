#include<bits/stdc++.h>
using namespace std;

struct xy
{
    int x,y;
} data[755];

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
int par[755];
int nd;
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
//   printf("linked %d %d\n",x,y);
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

double MST(int done)
{

    sort(vec.begin(),vec.end(),comp);
    int x,y,i,cnt;
    double ans=0.0;
    cnt=done;
    for(i=0; i<vec.size() && cnt<nd-1; i++)
    {

        x=find(vec[i].u);
        y=find(vec[i].v);
        if(x!=y)
        {
            cnt++;
            ans+=vec[i].c;
            //  printf("cost %lf\n",vec[i].c);
            link(x,y);
        }
    }

    return ans;
}


int main()
{
   // freopen("in.txt","r",stdin);
    int i,j,k,x,y,done;

    while(scanf("%d",&nd)==1)
    {
        ini();
        vec.clear();
        for(i=1; i<=nd; i++)
            scanf("%d %d",&data[i].x,&data[i].y);
        scanf("%d",&j);
        done=0;
        while(j--)
        {
            scanf("%d %d",&k,&i);
            x=find(k);
            y=find(i);
            if(x!=y)
            {
                 link(x,y);
                 done++;
            }
        }
        calculate_distance();
        double ans=MST(done);
        printf("%.2lf\n",ans);
    }

    return 0;
}
