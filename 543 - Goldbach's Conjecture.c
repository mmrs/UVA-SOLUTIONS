#include<stdio.h>
#include<math.h>
int prime(int i)
{
    if(i==3) return 1;
    int j,a,flag=1;
    a=sqrt(i)+1;
    for(j=2; j<=a; j++)
    {
        if(i%j==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)return 0;
    else return 1;
}
int main()
{
    int a,i;
    while(scanf("%d",&a)&&a)
    {
        for(i=3; i<a-2; i++)
        {
            if(prime(i)==1)
                if(prime(a-i)==1)
                {
                    printf("%d = %d + %d\n",a,i,a-i);
                    break;

                }
        }
    }
    return 0;
}
