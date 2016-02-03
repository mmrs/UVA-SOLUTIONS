#include<stdio.h>
int main()
{
    int cnt,max,t,a,b,i,j,c,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        max=0;
        k=a;
        for(; a<=b; a++)
        {
            cnt=2;
            if(a==1)
                cnt--;
            j=a;
            for(i=2; i<j; i++)
            {
                if(a%i==0)
                    cnt+=2;
                    j=a/i;
                    if((double)a/i==i)
                        cnt--;
            }
            if(cnt>max)
            {
                max=cnt;
                c=a;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",k,b,c,max);
    }
return 0;
}
