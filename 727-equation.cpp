#include<stdio.h>
#include<iostream>
#include<queue>
#include<stack>

using namespace std;

stack<char>s;
queue<char>q;

void insert(void)
{
    q.push(s.top());
    s.pop();
}

void clear(void)
{
    while(!q.empty())
        q.pop();
    while(!s.empty())
        s.pop();
}

int main()
{
   // freopen("in.txt","r",stdin);
    int t,i,j,l,k,ch;
    char ar[52],m,tmp[3],x;
    scanf("%d\n",&t);
    while(t--)
    {

        clear();

        string an="(";
        while(gets(tmp))
        {
            if(tmp[0]=='\0')
                break;
            sscanf(tmp," %c",&ch);
            an+=ch;

        }
        an+=")";

        l=an.size();
//        cout<<an<<endl;
//        printf("size of array %d\n",l);

        for(j=0; j<l; j++)
        {
            if(an[j]>='0' && an[j]<='9')
                q.push(an[j]);
            else if(an[j]=='(')
                s.push(an[j]);
            else if(an[j]=='*' || an[j]=='/')
            {
                while(s.size() && (s.top()=='*' || s.top()=='/'))
                {
                    insert();
                }
                s.push(an[j]);
            }
            else if(an[j]=='+' || an[j]=='-')
            {
                while(s.size() && (s.top()=='+' || s.top()=='-' || s.top()=='*' || s.top()=='/'))
                {
                    insert();
                }
                s.push(an[j]);
            }
            else if(an[j]==')')
            {
                while(s.size() && s.top()!='(')
                {
                    insert();
                }
                s.pop();
            }

        }
        while(!s.empty())
        {
            insert();
        }
        while(!q.empty())
        {
            cout<<q.front();
            q.pop();
        }
        printf("\n");
        if(t>0)
            printf("\n");
    }

    return 0;
}
