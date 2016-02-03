#include<stdio.h>
#include<string.h>
int main()
{
    int len,i,flag=0;
    char txt[1000];
    while(gets(txt))
    {
    len=strlen(txt);
    for(i=0;i<len;i++)
    {
        if(txt[i]=='"' && flag==0)
        {
            printf("``");
            flag=1;
        }
        else if(txt[i]=='"' && flag==1)
        {
            printf("''");
            flag=0;
        }
        else printf("%c",txt[i]);
    }
    printf("\n");

    }
    return 0;
}
