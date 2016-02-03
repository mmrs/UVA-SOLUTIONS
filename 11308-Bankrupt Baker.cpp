#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<cstring>                                              // header files
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
#define pf printf                                             //macros
#define clr(arr,val) memset(arr,val,sizeof(arr))

#define mp make_pair
#define pb push_back
#define fr first
#define sc second

#define inf (1<<30)-2

#define   REP(i,a,n)   for(i=a; i<n;  i++)
#define  REPE(i,a,n)   for(i=a; i<=n; i++)
#define  RREP(i,a,n)   for(i=a; i>n;  i--)
#define RREPE(i,a,n)   for(i=a; i>=n; i--)

#define sz  100


typedef long long int ll;
typedef unsigned long long int ull;                          //typedefs
typedef pair<int,int> pi;

/*------------------------------------------------------------------------------------------------------------------------------------------------------*/

struct data {
    string st;
    int cost;
    data(string a,int c) {
        st =a;
        cost = c;

    }
};

int sortMethod(data a,data b) {

    if(a.cost==b.cost)
        return a.st<b.st;
    return a.cost<b.cost;

}

int main()

{
//#ifndef ONLINE_JUDGE
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
//#endif

    int tst,budget,ingredients,recipes,i,j,l,cas,cost,unit;
    string binderName,st,recipeName;
    sf1(tst);
    REP(cas,0,tst) {
        scanf("\n");
        getline(cin,binderName);
        l = binderName.length();
        REP(i,0,l)
        binderName[i] = toupper(binderName[i]);
        sf3(ingredients,recipes,budget);
        map<string,int>mp;
        REP(i,0,ingredients) {
            cin>>st>>l;
            mp[st] = l;
        }
        vector<data>v;
        REP(i,0,recipes) {
            scanf("\n");
            getline(cin,recipeName);
            sf1(l);
            cost = 0;
            REP(j,0,l) {
                cin>>st>>unit;
                cost+= unit*mp[st];
            }
            if(cost<=budget)
                v.pb(data(recipeName,cost));

        }
        sort(v.begin(),v.end(),sortMethod);
        cout<<binderName<<"\n";
        if(!v.size())
            pf("Too expensive!\n");
        else {
            REP(i,0,v.size())
            cout<<v[i].st<<"\n";
        }
        pf("\n");

    }
    return 0;

}


