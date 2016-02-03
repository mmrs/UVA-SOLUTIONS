#include<stdio.h>
#include<string.h>
int main()
{
    /*freopen("F:\\in.txt","r",stdin);*/
    int len,i,j,div,a,b;
    char txt[102],tmp[13],prnt[102],bal;
    while(scanf("%d",&div)&&div)
    {
        scanf("%c",&bal);
        gets(txt);
        len=strlen(txt);
        div=len/div;
        prnt[0]='\0';
        for(i=0,a=div-1; i<len; i+=div,a+=div)
        {
            b=a;
            for(j=0; a>=i; j++,a--)
                tmp[j]=txt[a];
            tmp[j]='\0';
            strcat(prnt,tmp);
            a=b;
        }
        puts(prnt);
    }
    return 0;
}

