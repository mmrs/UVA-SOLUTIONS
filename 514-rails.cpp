#include<stdio.h>
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main()
{
    int x,i,y,f1,f2,f,k;
    queue<int>q;
    stack<int>st;
    while(scanf("%d",&x) && x)
    {
        while(1)
        {
            while(!q.empty())
                q.pop();
            while(!st.empty())
                st.pop();
            f1=f2=0;
            for(i=0; i<x; i++)
            {
                scanf("%d",&y);
                if(y==0)
                {
                    f1=1;
                    break;
                }
                q.push(y);
            }
            if(f1==1)
                break;
            k=0;
            while(!q.empty())
            {

                f=q.front();
                q.pop();
                if(f>k)
                {
                    for(i=k+1; i<f; i++)
                        st.push(i);
                    k=f;
                }

                else if(f==st.top())
                {
                    st.pop();
                }
                else
                {
                    f2=1;
                    break;
                }
            }
            if(f2==1)
                printf("No\n");
            else printf("Yes\n");
        }
        printf("\n");
    }

    return 0;
}
