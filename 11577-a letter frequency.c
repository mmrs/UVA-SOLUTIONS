#include<stdio.h>
#include<ctype.h>
int main()
{
    int a,b,i,j,k;
    char ar[201],t;
    scanf("%d ",&b);

    for(k=0;k<b;k++)
    {
        gets(ar);
        int count[27]={0};
        char cmp[]={"abcdefghijklmnopqrstuvwxyz"};
        for(i=0;ar[i]!='\0';i++)
        {
            ar[i]=tolower(ar[i]);
            for(j=0;j<26;j++)
                if(ar[i]==97+j)
                {
                   count[j]++;
                   break;
                }
        }
        for(i=0;i<26;i++)
            for(j=i+1;j<26;j++)
            if(count[i]<count[j])
        {
            a=count[j];
            count[j]=count[i];
            count[i]=a;
            t=cmp[j];
            cmp[j]=cmp[i];
            cmp[i]=t;
        }
        for(i=0;i<27;i++)
        if(count[i]!=count[i+1])
        {
            count[i+1]=0;
            cmp[i+1]='\0';
            break;
        }
        puts(cmp);
    }
    return 0;
}
