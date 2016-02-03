#include<stdio.h>

int main()
{
    int st,p,q,r,ans,a,b,c,d;
    while(scanf("%d %d %d %d",&st,&p,&q,&r)==4)
    {
        if(st==0 && p==0 && q==0 && r==0)
            break;
        ans=1080;  //360*3

        if(p>st)
           a=(40-p+st)*9;
        else a=(st-p)*9;
        if(p>q)
            b=(40-p+q)*9;
        else b=(q-p)*9;
        if(r>q)
            c=(40-r+q)*9;
        else c=(q-r)*9;
        ans=ans+a+b+c;
        printf("%d\n",ans);
    }
    return 0;
}
