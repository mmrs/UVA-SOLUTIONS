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
//#define sz  1000003

using namespace std;

int main()

{
#ifndef ONLINE_JUDGE
//freopen("H:\\C_Codes\\input.txt","r",stdin);
#endif
    int i,vertex,edge,tsk1,tsk2,l;

    while(scanf("%d %d",&vertex,&edge)==2)
    {
        if(vertex==0 && edge==0)
            break;
        vector<int>ans;
        int deg[1000002]= {0};
        vector<int>v[vertex+2];
        for(i=0; i<edge; i++)
        {
            scanf("%d %d",&tsk1,&tsk2);  /* representing degree & which one is before */
            v[tsk1].push_back(tsk2);
            deg[tsk2]++;
        }
        queue<int>q;
        for(i=1; i<=vertex; i++) /* pushing vertex of deg[0] to queue cz it is not dependent to others */
            if(deg[i]==0)
                q.push(i);
        int f;
        while(!q.empty())    /* top sort */
        {
            f=q.front();
            ans.push_back(f);
            q.pop();
            for(i=0; i<v[f].size(); i++)
            {
                deg[v[f][i]]--;
                if(deg[v[f][i]]==0)
                    q.push(v[f][i]);
            }
        }
        l=ans.size();
        if(l!=vertex)
            printf("IMPOSSIBLE\n");
        else
        {
            for(i=0; i<l; i++)
                printf("%d\n",ans[i]);
        }
    }
    return 0;
}
