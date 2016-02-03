#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,j,k;
    char cn[2001][30],ld[70];
    while(scanf("%d",&a)==1)
    {
        int count[2001]= {0};
        for(i=0; i<a; i++)
        {
            scanf("%s",cn[i]);
            gets(ld);
        }
        for(i=0; i<a; i++)
            for(j=i+1; j<a; j++)
                if(strcmp(cn[i],cn[j])==0)
                {
                    count[i]++;
                    cn[j][0]='\0';
                }
        for(i=0; i<a-1; i++)
        {
            for(j=i+1; j<a; j++)
            {
                if(cn[j][0]=='\0')continue;
                if(strcmp(cn[i],cn[j])>0)
                {
                    strcpy(ld,cn[i]);
                    strcpy(cn[i],cn[j]);
                    strcpy(cn[j],ld);
                    k=count[i];
                    count[i]=count[j];
                    count[j]=k;
                }
            }
        }
        for(i=0; i<a; i++)
        {
            if(cn[i][0]!='\0')
                printf("%s %d\n",cn[i],count[i]+1);
        }
    }
    return 0;
}
