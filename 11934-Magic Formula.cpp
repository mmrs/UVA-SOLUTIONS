#include<stdio.h>

int main()
{

    int a,b,c,d,l,i,cnt;
    long long eqn;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&l)==5)
    {
        cnt=0;
        if(a==0 && b==0 && c==0 && d==0 && l==0)
            break;
        for(i=0; i<=l; i++)
        {
            eqn=(a*i*i)+(b*i)+c;
            if(eqn%d==0)
                cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;

}
