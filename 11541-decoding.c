#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a,b,i,j,k,len,l,tst,n[200];
    char nm[201],ot[1000],ch[101],ct[10],tmp[500];
    scanf("%d ",&tst);
    for(a=1; a<=tst; a++)
    {
        gets(nm);
        len=strlen(nm);
        l=j=k=0;

        for(i=0; i<len; i++)
        {
            if(nm[i]>='A' && nm[i]<='Z')
            {
                ch[j]=nm[i];
                ch[++j]='\0';
            }
            else if(nm[i]>='0'&&nm[i]<='9')
            {
                ct[k]=nm[i];
                ct[++k]='\0';
                if(nm[i+1]<'0'||nm[i+1]>'9')
                {
                    n[l]=atoi(ct);
                    l++;
                    k=0;
                }
            }
        }
        k=0;
        for(b=0; b<j; b++)
        {
            for(i=0; i<n[b]; i++)
                tmp[i]=ch[b];
            tmp[i]='\0';
            for(i=0;tmp[i]!='\0';i++,k++)
                ot[k]=tmp[i];
                ot[k]='\0';
        }
        printf("Case %d: %s\n",a,ot);
    }
    return 0;
}
