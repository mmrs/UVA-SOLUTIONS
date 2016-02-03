#include <cstdio>
#include <string>
#include <iostream>
#include<cstring>
#define sz 1050
using namespace std;
char ar[5005][sz];
int main()
{

    int a,i,carry,k,flag;
    memset(ar,'0',sizeof(ar));
    ar[0][sz-1]='0';
    ar[1][sz-1]='1';
    for(i=2; i<=5001; i++)
    {
        carry=0;
        k=sz-1;
        for(; k>0; k--)
        {
            ar[i][k]=(carry+ar[i-1][k]+ar[i-2][k]-96)%10+48;
            carry=(carry+ar[i-1][k]+ar[i-2][k]-96)/10;
            ar[i][k-1]=carry+48;
        }
    }
    while(scanf("%d",&a)==1)
    {
        flag=0;
        for(i=0; i<=sz-1; i++)
        {
            if(ar[a][i]!='0')
                flag=1;
            if(flag==1)
                printf("%c",ar[a][i]);
        }
        cout<<endl;
    }
    return 0;
}
