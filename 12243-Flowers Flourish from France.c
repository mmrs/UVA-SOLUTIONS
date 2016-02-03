#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    /*freopen("F:\\in.txt","r",stdin);*/
    int i,j,len,flag;
    char txt[1001];
    while(gets(txt)&&strcmp(txt,"*")!=0)
    {
        len=strlen(txt);
        flag=0;
        for(i=0;i<len;i++)
        {
            strlwr(txt);
            while(txt[i]!=' '&&i<len)
                i++;
                if(txt[0]!=txt[++i] && i<len)
                {
                    flag=1;
                    break;
                }
        }
        if(flag==1)
            printf("N\n");
        else printf("Y\n");
    }
    return 0;
}
