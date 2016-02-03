



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
#define sz 1000003

using namespace std;
int n1[sz],n2[sz];
char ar[sz];
int main()

{
#ifndef ONLINE_JUDGE
   // freopen("H:\\C_Codes\\input.txt","r",stdin);
#endif
    int t,m,i,k,l,carry,x,y;


    scanf("%d\n",&t);
    while(t--)
    {
        scanf("%d",&m);
        for(i=0; i<m; i++)
            scanf("%d %d",&n1[i],&n2[i]);
        carry=0;
        k=-1;
        for(--m; m>=0;m--)
        {
            ar[++k]=(carry+n1[m]+n2[m])%10+'0';
            carry=(carry+n1[m]+n2[m])/10;
        }
        for(; k>=0; k--)
            printf("%c",ar[k]);
        printf("\n");
        if(t>0)
            printf("\n");
    }

    return 0;

}

/*#include<stdio.h>
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


using namespace std;
vector<int>v[3];
char ar[1000003];
int main()

{
#ifndef ONLINE_JUDGE
    //freopen("H:\\C_Codes\\input.txt","r",stdin);
#endif
    int t,m,i,k,l,carry,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&m);
        for(i=0; i<=m; i++)
            v[i].clear();
        for(i=0; i<m; i++)
        {
            scanf("%d %d",&x,&y);
            v[0].push_back(x);
            v[1].push_back(y);
        }
        carry=0;
        k=-1;
        for(; m--;)
        {
            ar[++k]=(carry+v[0][m]+v[1][m])%10+'0';
            carry=(carry+v[0][m]+v[1][m])/10;

        }

        for(; k>=0; k--)
            printf("%c",ar[k]);
        printf("\n");
        if(t>0)
            printf("\n");
    }

    return 0;

}
*/
