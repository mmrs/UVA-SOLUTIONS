#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l1,k,tst;
    char ar[2][23],tmp[23];
    scanf("%d ",&tst);
    for(i=1; i<=tst; i++)
    {
        k=0;
        gets(ar[0]);
        gets(ar[1]);
        l1=strlen(ar[0]);
        for(j=0; j<l1; j++)
            if(ar[0][j]!=' ')
                tmp[k++]=ar[0][j];
                tmp[k]='\0';
        if(strcmp(ar[0],ar[1])==0)
        {
            printf("Case %d: Yes\n",i);
            continue;
        }
        else if(strcmp(ar[1],tmp)==0)
        {
            printf("Case %d: Output Format Error\n",i);
            continue;
        }
        else printf("Case %d: Wrong Answer\n",i);
    }
    return 0;
}
