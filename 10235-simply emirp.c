#include<stdio.h>
#include<math.h>
int primeid(int a)
{
    int i,j,b,flag=0;
    b=sqrt(a)+1;
    for(i=2; i<=b; i++)
    {
        if(a%i==0)
        {
            flag=0;
            break;
        }
        else flag=1;
    }
    if(flag==0)
        return 0;
    else return 1;
}
int main()
{
    int a,b,j,flag,fl1,fl,rev;
    while(scanf("%d",&a)==1)
    {
        j=a;
        if(a==1 || a==0)
        {
            printf("%d is not prime.\n",j);
            continue;
        }
        if(a==2)
        {
            printf("%d is prime.\n",j);
            continue;
        }
        flag=fl=fl1=1;
        if(1==primeid(a))
            fl=flag=0;
        rev=0;
        while(a)
        {
            rev=rev*10+a%10;
            a/=10;
        }
        if(1==primeid(rev))
            if(rev!=j)
                fl=2;
        if(flag==0 && fl==2)
            printf("%d is emirp.\n",j);
        else if(fl==0)
            printf("%d is prime.\n",j);
        else printf("%d is not prime.\n",j);
    }
    return 0;
}
