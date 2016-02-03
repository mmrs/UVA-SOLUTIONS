#include<stdio.h>
#include<iostream>
#include<vector>
#include<cstring>
#include<queue>
using namespace std;
int dis[1002];
queue<int>q;
vector<int>lst[1002];
int main()
{

    freopen("H:\\C_Codes\\input.txt","r",stdin);
    int t,p,d,n1,n2,i,j,f;
    scanf("%d\n\n",&t);
    while(t--)
    {
        scanf("%d %d",&p,&d);
        for(i=0;i<p;i++)
            lst[i].clear();
        memset(dis,-1,p*4);
        for(i=0;i<d;i++)
        {
            scanf("%d %d",&n1,&n2);
            lst[n1].push_back(n2);
            lst[n2].push_back(n1);
        }
      //  printf("\n");
      //  for(i=0;i<p;i++)
       // {                                     print adjacency list
        //    for(j=0;j<lst[i].size();j++)
        //    printf("%d ",lst[i][j]);
       //     printf("\n");
      //  }
      dis[0]=0;
      q.push(0);
      while(!q.empty())
      {
          f=q.front();
          q.pop();
          for(i=0;i<lst[f].size();i++)
          {
              if(dis[lst[f][i]]==-1)
              {
                  q.push(lst[f][i]);
                  dis[lst[f][i]]=dis[f]+1;
              }
          }

      }

       /* for(i=0;i<p;i++)
        {                                                     worked for two test cases
            for(j=0;j<lst[i].size();j++)
            {
                if(dis[lst[i][j]]==0)
                    dis[lst[i][j]]=dis[i]+1;
                    else if(dis[lst[i][j]]>dis[i]+1)
                    dis[lst[i][j]]=dis[i]+1;
            }
        }
        */
        for(i=1;i<p;i++)
            printf("%d\n",dis[i]);
            if(t>0)
                printf("\n");
    }
    return 0;
}
