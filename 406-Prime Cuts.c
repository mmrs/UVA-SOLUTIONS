#include<stdio.h>

int main()
{
    int prime[500],temp,num,c,i,j,count,div;
    while(scanf("%d %d",&num,&c)==2)
    {

        prime[0] = 1;
        count = 0;
        temp = 2;
        while(temp<=num)
        {
            div = 2;
            while(div<temp)
            {
                if(temp%div==0)break;
                div++;
            }
            if(div==temp)
            {
                prime[++count] = temp;
            }
            temp++;
        }
        count++;
        temp = count - c*2;
        if(temp<0)
        {
            printf("%d %d:",num,c);
            for(i=0; i<count; i++)
                printf(" %d",prime[i]);
        }
        else
        {
            if(count%2==0)
            {
                div = c*2;
            }
            else div = c*2-1;
            temp = count - div;
            temp/=2;
            printf("%d %d:",num,c);
            for(i=0; i<div; i++)
            {
                printf(" %d",prime[temp++]);
            }
        }
         printf("\n\n");

    }
    return 0;
}
