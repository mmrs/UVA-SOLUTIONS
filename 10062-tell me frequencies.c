#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,l1,i,j,kutta=1;
    char ar[1001],t;
    while(gets(ar))
    {
        int count[96]= {0};
        char cmp[]= {" !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}-"};
        l1=strlen(ar);
        for(i=0; i<l1; i++)
        {
            for(j=0; j<96; j++)
                if(ar[i]==32+j)
                {
                    count[j]++;
                    break;
                }
        }
        for(i=0; i<96; i++)
            for(j=i+1; j<96; j++)
            {
                if(count[i]>count[j])
                {
                    a=count[j];
                    count[j]=count[i];
                    count[i]=a;
                    t=cmp[j];
                    cmp[j]=cmp[i];
                    cmp[i]=t;
                }
                else if(count[i]==count[j])
                {
                    if(cmp[i]<cmp[j])
                    {
                        a=count[j];
                        count[j]=count[i];
                        count[i]=a;
                        t=cmp[j];
                        cmp[j]=cmp[i];
                        cmp[i]=t;
                    }
                }
            }
       if(kutta!=1)printf("\n");
        for(i=0; i<96; i++)
            if(count[i]>0)
                printf("%d %d\n",cmp[i],count[i]);
                kutta++;
    }
    return 0;
}
