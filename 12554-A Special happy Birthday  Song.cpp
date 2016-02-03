#include<stdio.h>
#include<cstring>
#include<iostream>
#include<vector>

using namespace std;

string ss[]=
{
    "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you",  "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"

};


vector<string>vec;
bool flag[103];

int main()
{
    string s;
    int i,j,l,tst;
    scanf("%d",&tst);
    l=tst;
    while(l--)
    {
        cin>>s;
        vec.push_back(s);
    }
    i=j=0;
    while(1)
    {
        cout<<vec[i++]<<": "<<ss[j++]<<"\n";
        flag[i-1]=1;
        if(flag[tst-1]==1 && j==16)
        break;
        if(i==tst)
            i=0;
        if(j==16)
            j=0;
    }

    return 0;
}
