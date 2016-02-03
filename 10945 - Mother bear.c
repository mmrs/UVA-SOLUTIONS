#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 500
int main()
{
    int i,j,len;
    char ar1[SIZE],tmp[SIZE],ar2[SIZE];
    while(gets(ar1))
    {
        if(strcmp(ar1,"DONE")==0)
            break;
        len=strlen(ar1);
        j=0;
        for(i=0;i<len;i++)
        {
            ar1[i]=tolower(ar1[i]);
            if(ar1[i]>='a' && ar1[i]<='z')
            {
                tmp[j]=ar1[i];
                j++;
            }
        }tmp[j]='\0';
        j--;
        for(i=0;j>=0;i++,j--)
        ar2[i]=tmp[j];
        ar2[i]='\0';
        if(strcmp(ar2,tmp)==0)
            printf("You won't be eaten!\n");
        else printf("Uh oh..\n");
    }
    return 0;
}
