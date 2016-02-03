#include<stdio.h>
#include<stack>
#include<string.h>

using namespace std;

int main()
{
    int i,t,flag,l;
    char ar[130];
    scanf("%d\n",&t);
    while(t--)
    {
        stack<char>s;
        flag=0;
        gets(ar);
        l=strlen(ar);
        for(i=0; i<l; i++)
        {
            if(ar[i]=='(' || ar[i]=='[')
                s.push(ar[i]);
            else if(s.size() && ar[i]==')' && s.top()=='(')
                s.pop();
            else if(s.size() && ar[i]==']' && s.top()=='[')
                s.pop();
            else
            {
                flag=1;
                break;
            }
        }
        if(s.size())
            flag=1;
        if(flag==1)
            printf("No\n");
        else printf("Yes\n");
    }
    return 0;
}
