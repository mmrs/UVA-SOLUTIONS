#include<stdio.h>
#include<string.h>
int main()
{
    char ar[250];
    int i,j,si,len;
    while(gets(ar))
    {
        len=strlen(ar);
        si=0;
        for(i=0;i<len; i++)
        {
            if(ar[i]>='0'&&ar[i]<='9')
                si+=ar[i]-'0';
            if(ar[i]<'0'||ar[i]>'9')
            {
                if(ar[i]=='b')
                    for(j=0; j<si; j++)
                        printf(" ");
                else
                    for(j=0; j<si; j++)
                        printf("%c",ar[i]);
                        si=0;
                if(ar[i]=='!')
                    printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}
