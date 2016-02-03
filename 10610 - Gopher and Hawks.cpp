#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<queue>
#include<vector>
#include<cstring>
#include<algorithm>
#include<set>
#include<sstream>
#include<map>
#include<utility>

using namespace std;

#define sf scanf
#define sf1(a) scanf("%d",&a)
#define sf2(a,b) scanf("%d %d",&a,&b)
#define sf3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define pf printf
#define clr(arr,val) memset(arr,val,sizeof(arr))
#define mp make_pair
#define pb push_back
#define inf (1<<30)-2
#define sz  1005

typedef long long int ll;



//int xx[] = {0, 1,  0, -1,    -1, 1,  1, -1 };     //4 & 8 move
//int yy[] = {1, 0, -1,  0,     1, 1, -1,-1 };

/*------------------------------------------------------------*/

struct node
{
    int indx;
    double x,y;

    node () { }
    node(int a,double b,double c)
    {
        indx=a;
        x=b;
        y=c;
    }
};

node data[sz];
int dist[sz];
int nd;

double calc_dist(int i,int j)
{
    return sqrt(((data[i].x-data[j].x)*(data[i].x-data[j].x))+((data[i].y-data[j].y)*(data[i].y-data[j].y)));
}

void bfs(double m)
{
    clr(dist,-1);
    queue<node>q;
    q.push(data[0]);
    dist[0]=0;
    while(!q.empty())
    {
        node tmp=q.front();
        q.pop();
        for(int i=0; i<nd; i++)
        {
            if(dist[i]==-1 && m>=calc_dist(tmp.indx,i))
            {
                q.push(data[i]);
                dist[i]=dist[tmp.indx]+1;
            }
        }
    }

//    for(int i=0; i<4; i++)
//        pf("%d ",dist[i]);
//        pf("\n");
}

int main()

{
//#ifndef ONLINE_JUDGE
//freopen("in.txt","r",stdin);
//#endif

    int tst,i,k,j,l,cs;
    int v,m;
    char ar[50];
    while(sf2(v,m)==2)
    {
        scanf("\n");
        if(!v && !m)
            return 0;
            l=0;
        double mmrs=v*60.0*m;
        while(gets(ar))
        {
            if(strlen(ar)==0)
                break;
                sscanf(ar,"%lf %lf",&data[l].x,&data[l].y);
           //     pf("%d %lf %lf\n",l,data[l].x,data[l].y);
                data[l].indx=l;
                l++;
                nd=l;
        }
        bfs(mmrs);
        if(dist[1]==-1)
            pf("No.\n");
        else pf("Yes, visiting %d other holes.\n",dist[1]-1);
    }

    return 0;

}


