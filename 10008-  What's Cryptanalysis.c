#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    /*freopen("J:\\in.txt","r",stdin);*/
    int a,b,c,i,j,k,len,count[27]= {0},no[27];
    char ar[50][100],pr[27],t;
    scanf("%d ",&a);
    for(i=0; i<a; i++)
        gets(ar[i]);
    for(j=0; j<a; j++)
    {
        len=strlen(ar[j]);
        for(i=0; i<len; i++)
        {
            for(k=0; k<26; k++)
            {
                ar[j][i]=toupper(ar[j][i]);
                if(ar[j][i]=='A'+k)
                {
                    count[k]++;
                    break;
                }
            }

        }
    }
    for(i=0,j=0; i<26; i++)
    {
        if(count[i]>0)                      /*knocking out 0 s*/
        {
            for(k=0; k<26; k++)
            {
                if(k==i)
                {
                    no[j]=count[i];
                    pr[j]=65+k;
                    j++;
                    break;
                }
            }
        }
    }
    for(i=0; i<j; i++)
    {
        /*sorting*/
        for(k=i+1; k<j; k++)
        {
            if(no[i]<no[k])
            {
                a=no[i];
                no[i]=no[k];
                no[k]=a;
                t=pr[i];
                pr[i]=pr[k];
                pr[k]=t;

            }
            else if(no[i]==no[k])
            {
                if(pr[i]>pr[k])
                {
                    t=pr[i];
                    pr[i]=pr[k];
                    pr[k]=t;
                }
            }
        }
    }
    for(i=0; i<j; i++)
        printf("%c %d\n",pr[i],no[i]);
    return 0;
}
