#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>
#include<cstring>
using namespace std;


int par[100],n;

struct data
{
    double p[2];
    double p1[2];
    double weight;
};
vector<data>v;
double node[100][2];

bool comp(data p,data q)
{
    return p.weight<q.weight;
}
void makeset(int n)
{
    for(int i=0; i<n; i++)
        par[i]=i;
    return;
}
int findset(double p,double q)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(node[i][0]==p && node[i][1]==q)
            break;

    }
    return i;
}
int parfind(int r)
{
    return r==par[r] ? r : par[r]=parfind(par[r]);
}
int main()
{
   // freopen("in.txt","r",stdin);
    data input;
    int t,i,j,x;
    scanf("%d\n",&t);
    while(t--)
    {
        double cost=0;
        v.clear();
       // memset(par,0,sizeof(par));
        scanf("%d",&n);
        for(i=0; i<n; i++)
            scanf("%lf %lf",&node[i][0],&node[i][1]);
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                input.p[0]=node[i][0];
                input.p[1]=node[i][1];
                input.p1[0]=node[j][0];
                input.p1[1]=node[j][1];
                input.weight=sqrt(((input.p[0]-input.p1[0])*(input.p[0]-input.p1[0]))+((input.p[1]-input.p1[1])*(input.p[1]-input.p1[1])));
                v.push_back(input);
            }
        }
        makeset(n);
        sort(v.begin(),v.end(),comp);
//       for(i=0;i<v.size();i++)
//            printf("%.2lf %.2lf %.2lf %.2lf %.2lf\n",v[i].p[0],v[i].p[1],v[i].p1[0],v[i].p1[1],v[i].weight);

        j=v.size();
        x=1;
        int m,y,o,p;
//        for(i=0; i<n; i++)
//            printf("%d ",par[i]);
//            printf("\n");
        for(i=0; i<j; i++)
        {
            m=findset(v[i].p[0],v[i].p[1]);
            y=findset(v[i].p1[0],v[i].p1[1]);
            o=parfind(m);
            p=parfind(y);
            if(o!=p)
            {
                par[p]=o;
                x++;
                cost+=v[i].weight;
            }
             if(x==n)
                break;
        }
//        printf("n = %d\n",n);
//        for(i=0; i<n; i++)
//            printf("%d ",par[i]);
//        printf("\n");
        printf("%.2lf\n",cost);
        if(t>0)
            printf("\n");
    }
    return 0;
}
