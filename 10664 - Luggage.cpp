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

#define rep(j,n) for(i=j;i<=(int)n;i++)
#define sf1(a) scanf("%d",&a)
#define sf2(a,b) scanf("%d %d\n",&a,&b)
#define sf3(a,b,c) scanf("%d %d %d\n",&a,&b,&c)
#define pf printf
#define clr(arr,val) memset(arr,val,sizeof(arr))
#define mp make_pair
#define pb push_back
#define sz  100

//
//int xx[] = {-1, -1, -1, 0, 0, 1, 1, 1};     //8 move
//int yy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
//int rr[]= {0,1,0,-1};
//int cc[]= {1,0,-1,0};     // 4 move

/*------------------------------------------------------------*/
int ar[23],amnt;
int dp[22][122];
int N;
int rec(int i,int am)
{
    if(am==amnt)
        return 1;
        if(i==N)
            return 0;
    if(dp[i][am]!=-1) return dp[i][am];
    int ret1=0,ret2=0;
    if(am+ar[i]<=amnt)
        ret1=rec(i+1,am + ar[i]);
    ret2=rec(i+1,am);
    return dp[i][am]= (ret1|ret2);

//    if(pos==N)
//    {
//        return ammount==amnt;
//    }
//    int &ret = dp[pos][ammount];
//    if(ret!=-1) return ret;
//    int p1=0,p2=0;
//    if(ammount+ar[pos] <= amnt) p1 = rec(pos+1,ammount+ar[pos]);
//    p2 = rec(pos+1,ammount);
//
//    return ret = (p1|p2);

}
int main()

{
//#ifndef ONLINE_JUDGE
//freopen("in.txt","r",stdin);
//#endif

    int tst,i,l,j;
    string s;
    sf1(tst);
    getchar();
    while(tst--)
    {
        amnt=0;
        getline(cin,s);
        stringstream b(s);
        int k=0;
        int a;
        while(b>>a)
        {
            ar[k]=a;
            amnt+=ar[k];
            k++;
        }

         N = k;
//        for(i=0; i<k; i++)
//            printf("%d ",ar[i]);
//
//        printf("amnt %d\n",amnt);
//             cout<<ll<<endl;
        if(amnt%2==1) printf("NO\n");
        else
        {
            clr(dp,-1);
            amnt>>=1;
           // printf("%d\n",amnt);
                if(rec(0,0))
                printf("YES\n");
            else  printf("NO\n");
        }
    }
    return 0;

}

