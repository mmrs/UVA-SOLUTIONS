#include<stdio.h>
#include<string.h>
int main()
{
    int t,a,b,i,j,k,l;
    char ar[52][505];
    scanf("%d",&t);
    for(b=1; b<=t; b++)
    {
        scanf("%d",&a);
        getchar();
        for(i=0; i<a; i++)
        {
            gets(ar[i]);
            if(i==0)printf("Case %d:\n",b);
            l=strlen(ar[i]);
            for(j=0; j<l;++j)
            {
                if(ar[i][j]==' ')
                {
                    printf(" ");
                    while(ar[i][++j]==' ' && j<l);
                    j--;
                }
                else printf("%c",ar[i][j]);
            }
            printf("\n");
        }
        if(b!=t)printf("\n");
    }
    return 0;
}
/*#include<string.h>
int main()
{
    int t,a,b,i,j,k,l;
    char ar[505];
    scanf("%d",&t);
    for(b=1; b<=t; b++)
    {
        scanf("%d",&a);
        getchar();
        for(i=0; i<a; i++)
        {
            gets(ar);
            l=strlen(ar);
            if(i==0)printf("Case %d:\n",b);
            for(j=0; j<l;++j)
            {
                if(ar[j]==' ')
                {
                    printf(" ");
                    while(ar[++j]==' ' && j<l);
                    j--;
                }
                else printf("%c",ar[j]);
            }
            printf("\n");
        }
        if(b!=t)printf("\n");
    }
    return 0;
}
*/
