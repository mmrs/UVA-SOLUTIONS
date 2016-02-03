#include<stdio.h>
#include<string.h>
int main()
{
    char ar[1000],c,div[1000];
    long long int a,i,j,mod,len,res,flag;
    while(scanf("%s %c %lld",ar,&c,&a)==3)
    {
        flag=mod=0;
        if(c=='%')
        {
            len=strlen(ar);
            for(i=0;i<len;i++)
                mod=(mod*10+(ar[i]-'0'))%a;
            printf("%lld\n",mod);
        }
        else if(c=='/')
        {
            mod=res=0;
            len=strlen(ar);
            for(j=i=0;i<len;i++)
            {
                res=(mod*10)+(ar[i]-'0');

                if(res>=a)
                {
                    div[j++]=res/a+'0';
                    mod=res%a;
                }
                else
                {
                    div[j++]='0';
                    mod=(mod*10+ar[i]-'0');
                }
            }
            div[j]='\0';
           for(i=0;i<j;i++)
           {
               if(div[i]!='0')
               flag=1;
               if(flag==0)
                continue;
            printf("%c",div[i]);
           }
               if(flag==0)
                printf("0");
           printf("\n");
        }
    }
    return 0;
}
