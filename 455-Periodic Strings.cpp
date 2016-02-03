#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main()
{
    int tst,i,j,l;
    string ss;
    scanf("%d",&tst);
    while(tst--)
    {
        cin>>ss;
        l = ss.length();
        for(i=1;i<=l;i++)
        {
            string sum= "";
            string part = ss.substr(0,i);
            int partlen = part.length();
            for(int j=0;j<l/partlen;j++)
                sum+=part;
            if(sum==ss)
            {
                printf("%d\n",partlen);
                break;
            }
        }
        if(tst)printf("\n");
    }
    return 0;
}

