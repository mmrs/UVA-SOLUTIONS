#include<stdio.h>

int main()
{
    int n,cnt,i;
    while(scanf("%d",&n)==1)
    {
        cnt=1;
        i=1;
        while(1)
        {
            if(i%n==0)
                break;
            i=(i*10)+1;
            i%=n;
            cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
