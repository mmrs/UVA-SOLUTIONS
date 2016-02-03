#include<stdio.h>
#include<stack>
#include<cstring>


using namespace std;

bool open(char c)
{
    if(c=='(' || c=='<' || c=='{' || c=='[')
        return true;
    return false;
}
bool close(char c)
{
    if(c==')' || c=='>' || c=='}' || c==']')
        return true;
    return false;
}


int main()
{
   // freopen("in.txt","r",stdin);
    int i,j,k,l,cnt;
    char ar[3500];
    stack<int>st;

    while(gets(ar))
    {
        cnt=0;
        while(!st.empty())
            st.pop();
        int len=strlen(ar);
        for(i=0; i<len; i++)
        {
            cnt++;
            if(open(ar[i]))
            {
                if(ar[i]=='(' && ar[i+1]=='*')
                {
                    st.push('*');
                    i++;
                }
                else st.push(ar[i]);
            }
           else  if(close(ar[i]) || (ar[i]=='*' && ar[i+1]==')'))
            {
                if(st.empty())
                    break;
                if(ar[i]=='*')
                {
                    if(st.top()!='*')
                        break;
                    st.pop();
                    i++;
                }
                else if(ar[i]==')')
                {
                    if(st.top()!='(')
                        break;
                    st.pop();
                }
                else if(ar[i]=='}')
                {
                    if(st.top()!='{')
                        break;
                    st.pop();
                }
                else if(ar[i]==']')
                {
                    if(st.top()!='[')
                        break;
                    st.pop();
                }
                else if(ar[i]=='>')
                {
                    if(st.top()!='<')
                        break;
                    st.pop();
                }
            }
        }
        if(i<len || !st.empty())
        {
            if(i==len && !st.empty())
                cnt++;

            printf("NO %d\n",cnt);
        }
        else printf("YES\n");

    }
    return 0;
}


/*
Input:

(*(*))
((*)
([)]
([  ])()(**)
*)
[
     (
Output:

NO 3
NO 3
NO 3
YES
NO 1
NO 2
NO 10

*/
