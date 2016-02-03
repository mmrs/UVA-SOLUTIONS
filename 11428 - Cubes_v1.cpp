#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
int main()

{
    int j,i,n,x,y,flag;
    while(scanf("%d",&n)&&n)
    {
        flag=0;
        for(i=1;i<60;i++)
        {
            for(j=0;j<=i;j++)
            {
                if((i*i*i-j*j*j)==n)
                {
                    printf("%d %d\n",i,j);
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        if(i==60)
            printf("No solution\n");
    }
    return 0;
}

