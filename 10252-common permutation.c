#include<stdio.h>
#include<string.h>
int main()
{
    char ar[2][1002],tmp[1002],er;
    int k,i,j,l1,l2,flag[1002];
    while(gets(ar[0]))
    {
        l1=strlen(ar[0]);
        gets(ar[1]);
        l2=strlen(ar[1]);
        for(i=0; i<1002; i++)
            flag[i]=0;
        if(l1>l2)
        {
            strcpy(tmp,ar[0]);
            strcpy(ar[0],ar[1]);
            strcpy(ar[1],tmp);
            tmp[0]='\0';
            l1^=l2^=l1^=l2;
        }
      tmp[0]='\0';
        for(i=0,j=0; i<l1; i++)
            for(k=0; k<l2; k++)
                if(ar[0][i]==ar[1][k] && flag[k]==0)
                {
                    tmp[j]=ar[0][i];
                    j++;
                    flag[k]=1;
                    break;
                }
        for(i=0; i<j; i++)
            for(k=i+1; k<j; k++)
                if(tmp[i]>tmp[k])
                {
                    er=tmp[i];
                    tmp[i]=tmp[k];
                    tmp[k]=er;
                }
        tmp[k]='\0';
        puts(tmp);
    }
    return 0;
}
