#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,j,nm,flag;
    char ar[25];
    while(gets(ar))
    {
        nm=0;
        for(i=0;ar[i]!='\0';i++)
        {
            for(j=0;j<58;j++)
                if(ar[i]==65+j)
                {
                    if(j<26)
                    nm+=27+j;
                    else
                        nm+=j-31;
                    break;
                }
            }
        a=sqrt(nm)+1;
        flag=0;
        for(i=2;i<=a;i++)
        {
            if(nm%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0 || nm==2)
            printf("It is a prime word.\n");
            else printf("It is not a prime word.\n");
    }
    return 0;
}
