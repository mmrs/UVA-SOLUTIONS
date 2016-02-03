#include<string.h>
#include<stdio.h>
#include<map>
#include <algorithm>

using namespace std;

int main()
{
    char st[100];
    int cas,i,j,l,tst,mapper[100];
    scanf("%d ",&tst);
    for(cas=0; cas<tst; cas++)
    {
        map<int,char>mp;
        gets(st);
        l = strlen(st);
        for(i=0;i<l;i++)
        {
            j = st[i];                    // mapping the characters to define it's position acording to problm statement
            if(j>='A' && j<='Z')          // AaBbC  'a' will sit beside 'A' thus 'b' beside 'B' and so on.that's why mapping
            {
                j<<=1;
            }
            else j = 131+2*(st[i]-'a');
            mapper[i]= j;
            mp[j]= st[i];
        }
        sort(mapper,mapper+l);
        do
        {
            for(i=0;i<l;i++)
                printf("%c",mp[mapper[i]]);
                    printf("\n");
        }
        while(next_permutation(mapper,mapper+l));
    }
    return 0;
}
