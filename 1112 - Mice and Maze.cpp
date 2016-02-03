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

#define sf1(a) scanf("%d",&a)
#define sf2
#define sf3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define pf printf
#define clr(arr,val) memset(arr,val,sizeof(arr))
#define mp make_pair
#define pb push_back
#define inf (1<<30)-2
#define sz  103

typedef long long int ll;

/*------------------------------------------------------------*/
int dist[sz][sz];
int no,ext,T,edge;

void ini(void)
{
    for(int i=1; i<=no; i++)
        for(int j=1; j<=no; j++)
        {
            dist[i][j]=inf;
            if(i==j)
                dist[i][j]=0;
        }
}

int main()

{
//#ifndef ONLINE_JUDGE
//freopen("in.txt","r",stdin);
//#endif

    int tst,i,k,j,l,s;
    bool flag=true;
    sf1(tst);
    while(tst--)
    {
        sf1(no);
        sf1(ext);
        sf1(T);
        sf1(edge);
        ini();
        for(i=1; i<=edge; i++)
        {
            int u,v,w;
            sf3(u,v,w);
            dist[u][v]=w;
        }
        for(k=1; k<=no; k++)
            for(i=1; i<=no; i++)
                for(j=1; j<=no; j++)
                    dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
        int cnt=0;
        for(i=1; i<=no; i++)
            if(dist[i][ext]<=T)
                cnt++;
                if(!flag)
                    pf("\n");
                flag=false;
        pf("%d\n",cnt);

    }
    return 0;
}

