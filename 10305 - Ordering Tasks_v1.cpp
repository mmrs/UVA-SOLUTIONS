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
#define sz  100

using namespace std;

int main()

{
#ifndef ONLINE_JUDGE
//freopen("H:\\C_Codes\\input.txt","r",stdin);
#endif
int i,j,m,n,vertex,edge,tsk1,tsk2;

while(scanf("%d %d",&vertex,&edge)==2)
{
    if(vertex==0 && edge==0)
        break;

    int deg[101]={0};
    vector<int>v[101];
    for(i=0;i<edge;i++)
    {
        scanf("%d %d",&tsk1,&tsk2);  /* representing degree & which one is before */
        v[tsk1].push_back(tsk2);
        deg[tsk2]++;
    }
    queue<int>q;
    for(i=1;i<=vertex;i++)   /* pushing vertex of deg[0] to queue cz it is not dependent to others */
        if(deg[i]==0)
        q.push(i);
        int f;
        while(!q.empty())    /* top sort */
        {
            f=q.front();
            printf("%d ",f);
            q.pop();
            for(i=0;i<v[f].size();i++)
            {
                deg[v[f][i]]--;
                if(deg[v[f][i]]==0)
                    q.push(v[f][i]);
            }
        }
        printf("\n");
        for(i=1;i<=vertex;i++)
            v[i].clear();

}
return 0;

}
