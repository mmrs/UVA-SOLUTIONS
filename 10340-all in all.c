#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 1000000
int main()
{
    int l1,l2,i,j,flag,*f,k;
    char b[SIZE],c[SIZE];
    while(scanf("%s %s",b,c)==2)
    {
        l1=strlen(b);
        l2=strlen(c);
        f=(int*)malloc(l2*sizeof(int));
        for(i=0; i<l2; i++)
            f[i]=0;
            k=0;
        for(i=0; i<l1; i++)
        {
            flag=0;
            for(j=i; j<l2; j++)
            {
                if(f[j]==0 && b[i]==c[j])
                {
                    flag=1;
                    for(; k<=j; k++)
                        f[k]=1;
                    break;
                }
            }
            if(flag==0)
                break;
        }
        if(flag==1)
            printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
