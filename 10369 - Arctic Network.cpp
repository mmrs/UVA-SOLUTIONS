#include<bits/stdc++.h>

using namespace std;
struct xy
{
    int x,y;
}data[503];

int par[503];
int nd,st;
struct xxx
{
    int u,v;
    double c;
    xxx(int x,int y,double e)
    {
        u=x;
        v=y;
        c=e;
    }
};
vector<xxx>vec;
double ans;
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
            //   printf("%d %d %.2lf\n",i,j,dis);

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
    ans=0.0;
    for(i=0; i<vec.size() && cnt<nd-1; i++)
    {
        x=find(vec[i].u);
        y=find(vec[i].v);
        if(x!=y)
        {
            cnt++;
            link(x,y);
            if(vec[i].c>ans)
                ans=vec[i].c;
        }
        if(cnt==nd-st)
            break;
    }
}

int main()
{
//  freopen("in.txt","r",stdin);
    int i,j,k,x,y,cs,tst;
    scanf("%d",&tst);
    for(cs=1; cs<=tst; cs++)
    {
        scanf("%d %d",&st,&nd);
        ini();
        vec.clear();
        for(i=1; i<=nd; i++)
            scanf("%d %d",&data[i].x,&data[i].y);
        calculate_distance();
        MST();
        printf("%.2lf\n",ans);

    }
return 0;
}
