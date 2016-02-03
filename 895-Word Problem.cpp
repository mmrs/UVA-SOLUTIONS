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
//freopen("in.txt","r",stdin);
#endif
    int i,j,k,l,x,y;
    vector<string>vs;
    string st;
    char ar[20];
    i=0;
    while(cin>>st && st!="#")
    {
        vs.push_back(st);
        i++;
    }

//    for(j=0; j<i; j++)
//        cout<<vs[j]<<endl;
    getchar();

    while(gets(ar) && ar[0]!='#')
    {
        l=strlen(ar);
        int cnt[26]= {0};
        int tmp[26]= {0};
        int count=0;
        for(i=0; i<l; i+=2)
        {
            cnt[ar[i]-97]++;
            tmp[ar[i]-97]++;
        }
//        for(i=0;i<26;i++)
//            printf("%d ",cnt[i]);
//            printf("\n");
        y=vs.size();
        for(i=0; i<y; i++)
        {
            x=vs[i].length();
            for(j=0; j<x; j++)
            {
                if(tmp[vs[i][j]-97]==0)
                    break;
                else
                    tmp[vs[i][j]-97]--;
            }
            if(j==x)
                count++;
            for(k=0; k<26; k++)
                tmp[k]=cnt[k];
        }
        printf("%d\n",count);
    }

    return 0;

}

