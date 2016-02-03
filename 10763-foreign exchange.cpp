#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fr first
#define sc second

map<pair<int,int> , int > check;

int main()
{
    // freopen("in.txt","r",stdin);

    int tst,i,from,to,a,b;
    bool flag=0;
    while(scanf("%d",&tst)&&tst)
    {

        flag=1;
        check.clear();

        for(i=0; i<tst; i++)
        {
            scanf("%d %d",&from,&to);
            check[mp(from,to)]++;
        }

        map<pair<int,int> , int > :: iterator  it;
        for(it = check.begin(); it!=check.end(); it++)
        {
            a = it->fr.fr;
            b = it->fr.sc;
           // printf("%d %d\n",a,b);
            if(it->sc != check[mp(b,a)])
            {
                printf("NO\n");
                flag = 0;
                break;
            }

        }
        if(flag) printf("YES\n");
    }

    return 0;
}
