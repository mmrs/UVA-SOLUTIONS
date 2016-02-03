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
#define sz  100000

using namespace std;

int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    else return(gcd(b,a%b));
}

int main()
{
    int t,i,j,l;
    double x,cnt;
    vector<int>v;
    while(scanf("%d",&t)&&t)
    {
        cnt=t;
        v.clear();
        while(cnt--)
        {
            scanf("%d",&i);
            v.push_back(i);
        }
        cnt=0;
        l=v.size();
        for(i=0; i<l-1; i++)
        {
            for(j=i+1; j<l; j++)
                if(gcd(v[i],v[j])==1)
                    cnt++;
        }
        if(cnt==0)
            printf("No estimate for this data set.\n");
        else
        {
            x=(t*(t-1))/2.0;
            x=sqrt((x*6.0)/cnt);
            printf("%.6lf\n",x);
        }
    }
    return 0;
}
