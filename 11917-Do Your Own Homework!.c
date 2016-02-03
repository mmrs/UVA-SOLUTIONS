#include<stdio.h>
#include<string.h>
int main()
{
    int t,a[1000],day,ex,i,j,k,flag;
    char sub[1000][22],tmp[22];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        flag=0;
        scanf("%d",&ex);
        for(j=0;j<ex;j++)
            scanf("%s %d",&sub[j],&a[j]);
            scanf("%d %s",&day,&tmp);
            printf("Case %d: ",i);
            for(j=0;j<ex;j++)
            {
                if(strcmp(tmp,sub[j])==0)
                {
                    if(a[j]<=day)
                        printf("Yesss\n");
                    else if(a[j]<=day+5)
                        printf("Late\n");
                    else printf("Do your own homework!\n");
                    flag=1;
                    break;
                }
            }
            if(flag==0)printf("Do your own homework!\n");
    }
    return 0;
}
