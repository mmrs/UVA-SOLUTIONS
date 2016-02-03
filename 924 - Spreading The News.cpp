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
#define sz  2505

typedef long long int ll;



//int xx[] = {0, 1,  0, -1,    -1, 1,  1, -1 };     //4 & 8 move
//int yy[] = {1, 0, -1,  0,     1, 1, -1,-1 };


/*------------------------------------------------------------*/


int nd;
vector<int>vec[sz];
int mx;
int dist[sz];

void bfs(int st)
{

    clr(dist,-1);
    queue<int>q;
    q.push(st);
    dist[st]=0;
    while(!q.empty())
    {
        int tp=q.front();
        q.pop();
        for(int j=0; j<vec[tp].size(); j++)
        {
            if(dist[vec[tp][j]]==-1)
            {
                dist[vec[tp][j]]=dist[tp]+1;
                q.push(vec[tp][j]);
            }
        }
    }
    return;
}

int main()

{
//#ifndef ONLINE_JUDGE
//    freopen("in.txt","r",stdin);
//#endif

    int tst,i,k,j,l,cs,day,mx;
    while(sf1(nd)==1)
    {
        for(i=0; i<nd; i++)
            vec[i].clear();
        for(i=0; i<nd; i++)
        {
            sf1(l);
            while(l--)
            {
                sf1(k);
                vec[i].pb(k);
            }
        }
        sf1(tst);
        while(tst--)
        {
            sf1(k);
            bfs(k);

            sort(dist,dist+nd);
//            for(i=0; i<nd; i++)
//                pf("%d ",dist[i]);
//            pf("\n");
            i=1;
            day=mx=i=0;
            for(i=0; i<nd; i++)
            {
                j=i;
                cs=0;
                while(dist[i]==dist[j])
                {
                    if(dist[j]>0)
                    cs++;
                    j++;
                }
                if(cs>mx)
                {
                    mx=cs;
                    day=dist[i];
                }
                i=j-1;
            }

            if(dist[nd-1]==0)
                pf("0\n");
            else
                pf("%d %d\n",mx,day);

        }
    }
    return 0;

}

