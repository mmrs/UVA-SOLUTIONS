#include<stdio.h>
#include<queue>

using namespace std;

int main()
{

    int i,n,f1,f2,cost,costtmp,a;
    priority_queue<int>q;
    while(scanf("%d",&n)&&n)
    {

        cost=0;
        costtmp=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a);
            a=-a;
            q.push(a);
        }
        while(!q.empty())
        {
            f1=q.top();
            f1=-f1;
            q.pop();
            f2=q.top();
            f2=-f2;
            q.pop();
            costtmp=f1+f2;
            cost+=costtmp;
            costtmp=-costtmp;
            if(q.size()>0)
            q.push(costtmp);

        }
        printf("%d\n",cost);

    }

    return 0;

}
