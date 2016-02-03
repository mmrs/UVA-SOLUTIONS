#include<stdio.h>
int main()
{
    int tst,i,b,nmbr,a,sum,flag;
    scanf("%d",&tst);
    for(i=1;i<=tst;i++)
    {
        scanf("%d",&a);
        nmbr=a;
        flag=0;
        while(a>=1)
        {
            sum=0;
            if(a==1||a==7)
            {
                flag=1;
                break;
            }
            else if(a==2 || a==3 ||a==4||a==5||a==6||a==7||a==8||a==9)
            {
                flag=0;
                break;
            }
            while(a>0)
            {
                b=a%10;
                sum=sum+b*b;
                a=a/10;
            }
            a=sum;
        }
        if(flag==1)
            printf("Case #%d: %d is a Happy number.\n",i,nmbr);
        else printf("Case #%d: %d is an Unhappy number.\n",i,nmbr);
    }
    return 0;
}
