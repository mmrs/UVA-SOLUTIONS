#include <cstdio>
#include <iostream>
using namespace std;
int main()
{

    int z,i,m,l,k,j,a,b,count,cs=0;
    while(cin>>z>>i>>m>>l)
    {
        if(z==0&&i==0&&m==0&&l==0)
            break;
        l=(z*l+i)%m;
        count=1;
        k=l;
        while(1)
        {

            l=(z*l+i)%m;
            if(k==l)
                break;
            count++;

        }
        cout<<"Case "<<++cs<<": "<<count<<endl;
    }
    return 0;
}
