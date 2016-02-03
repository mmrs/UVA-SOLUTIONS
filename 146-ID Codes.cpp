#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    char st[52];
    while(gets(st))
    {
        if(st[0]=='#') break;

        int len=strlen(st);

        if(next_permutation(st,st+len))
            puts(st);
        else
            puts("No Successor");
    }
    return 0;
}
