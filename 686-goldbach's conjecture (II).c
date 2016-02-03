#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int prime(int i)
{
    if(i==2 || i==3) return 1;
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
    int a,i,j,count,*flag;
    while(scanf("%d",&a)&&a)
    {
        flag=(int*)malloc(a*sizeof(int));
        for(i=0; i<a; i++)
            flag[i]=0;
        count=0;
        for(i=2; i<a-1; i++)
        {
            if(flag[i]==0 && prime(i)==1)
                if(flag[a-i]==0 && prime(a-i)==1)
                {
                    count++;
                    flag[i]=flag[a-i]=1;
                }
        }
        printf("%d\n",count);
    }
    return 0;
}
