#include<iostream>
#include<stdio.h>
#include<string.h>
#include<map>
using namespace std;

int main()
{
    map<string,string>mmrs;
    char a[11],b[11],mn[25];
    while(gets(mn))
    {
        if(mn[0]=='\0')break;
        sscanf(mn,"%s %s",a,b);
        mmrs[b]=a;
    }
    while(gets(mn))
    {
        if(mmrs.find(mn)!=mmrs.end())
            cout<<mmrs[mn]<<endl;
        else printf("eh\n");
    }

    return 0;
}
