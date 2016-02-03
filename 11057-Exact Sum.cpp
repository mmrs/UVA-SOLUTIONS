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
#define sz  100

using namespace std;

int main()

{
#ifndef ONLINE_JUDGE
    //freopen("H:\\C_Codes\\input.txt","r",stdin);
#endif
    int n,i,j,min,a,b,prc;

    while(scanf("%d",&n)==1)
    {
        vector<int>v;
        for(i=0; i<n; i++)
        {
            scanf("%d",&j);
            v.push_back(j);
        }
        scanf("%d",&prc);
        sort(v.begin(),v.end());
        min=v[n-1];
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {

                if(v[i]+v[j]==prc && v[j]-v[i]<min)
                {
                    a=v[i];
                    b=v[j];
                    min=v[j]-v[i];
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",a,b);
    }
    return 0;
}

