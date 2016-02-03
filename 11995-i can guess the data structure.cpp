#include<cstdio>
#include<queue>
#include<stack>

using namespace std;

int main()
{
    int t,a,b,c,z,d,cq,cstc,cpq;
    while(scanf("%d",&t)==1)
    {
        queue<int>q;
        stack<int>stc;
        priority_queue<int>pq;
        z=0;
        d=0;
        cq=0;
        cstc=0;
        cpq=0;
        for(c=0; c<t; ++c)
        {
            scanf("%d %d",&a,&b);
            if(a==1)
            {
                q.push(b);
                stc.push(b);
                pq.push(b);
            }
            if(a==2)
            {
                ++d;
                if(!q.empty() && b==q.front())
                {
                    ++cq;
                    q.pop();
                }
                if(!stc.empty() && b==stc.top())
                {
                    ++cstc;
                    stc.pop();
                }
                if(!pq.empty() && b==pq.top())
                {
                    ++cpq;
                    pq.pop();
                }
            }
        }
        if((d==cq && d==cstc) || (d==cq && d==cpq) || (d==cstc && d==cpq) || (d==cq && d==cstc && d==cpq))
            printf("not sure\n");
        else if(d==cq)
            printf("queue\n");
        else if(d==cstc)
            printf("stack\n");
        else if(d==cpq)
            printf("priority queue\n");
        else
            printf("impossible\n");

    }
    return 0;
}

