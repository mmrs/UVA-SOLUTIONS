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
#define pf printf
#define sf scanf

using namespace std;


int main()

{

    string x;
    vector<string>sv;
    char ar[1500];
    int con[100]= {0};
    int t,i,j,k,l,n;
    con['A']=2;
    con['B']=2;
    con['C']=2;
    con['D']=3;
    con['E']=3;
    con['F']=3;
    con['G']=4;
    con['H']=4;
    con['I']=4;
    con['J']=5;
    con['K']=5;
    con['L']=5;
    con['M']=6;
    con['N']=6;
    con['O']=6;
    con['P']=7;
    con['R']=7;
    con['S']=7;
    con['T']=8;
    con['U']=8;
    con['V']=8;
    con['W']=9;
    con['X']=9;
    con['Y']=9;
    sf("%d",&t);
    while(t--)
    {
        sf("%d\n",&n);
        sv.clear();
        for(i=0; i<n; i++)
        {
            gets(ar);
            l=strlen(ar);
            x="";
            for(j=0; j<l; j++)
            {
                if(isdigit(ar[j]))
                    x+=ar[j];
                else if(ar[j]>='A' && ar[j]<'Z' && ar[j]!='Q')
                    x+=(con[ar[j]]+'0');

            }
            sv.push_back(x);
        }
        sort(sv.begin(),sv.end());
        int cnt,flag=0;
        for(i=1; i<n; i++)
        {
            cnt=1;
            while(i<n && sv[i]==sv[i-1])
            {
                cnt++;
                i++;
            }
            if(cnt>1)
            {
                --i;
                cout<<sv[i].substr(0,3)<<"-"<<sv[i].substr(3,4)<<" "<<cnt<<endl;
                flag=1;
            }
        }
        if(flag==0)
            pf("No duplicates.\n");
        if(t>0)
            cout<<endl;

    }

    return 0;

}

