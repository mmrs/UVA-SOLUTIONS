#include<stdio.h>
#include<math.h>
int main()
{
    int tst,a,count,i,j,k,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        i=a;
        count=0;
        while(i!=0)
        {
            /*new method of counting 1 without converting to binary*/
            if(i%2!=0)count++;
            i/=2;
        }
        printf("%d ",count);
        k=0;
        while(a!=0)
        {
            /*convert to hexadecimal*/
            i+=(a%10)*pow(16,k++);
            a/=10;
        }
        count=0;
        while(i!=0)
        {
            if(i%2!=0)count++;        /*again count*/
            i/=2;
        }
        printf("%d\n",count);
    }
    return 0;
}
