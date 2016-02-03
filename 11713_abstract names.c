#include<stdio.h>
#include<string.h>
int main()
{
    /*freopen("F:\\in.txt","r",stdin);*/
    int tst,i,l1,l2,flag,j;
    char n1[20],n2[20];
    scanf("%d ",&tst);
    for(j=0;j<tst;j++)
    {
        scanf("%s %s",n1,n2);
        l1=strlen(n1);
        l2=strlen(n2);
        flag=0;
        if(l1==l2)
        {
            for(i=0;i<l1;i++)
            {
                if((n1[i]=='a' ||n1[i]=='e'||n1[i]=='i'||n1[i]=='o'||n1[i]=='u')&&
                    (n2[i]=='a' ||n2[i]=='e'||n2[i]=='i'||n2[i]=='o'||n2[i]=='u'))
                    flag=1;
                    else if(n1[i]==n2[i])
                        flag=1;
                    else
                    {
                        flag=0;
                        break;
                    }
            }
            if(flag==1)
                printf("Yes\n");
            else printf("No\n");
        }
        else printf("No\n");
    }
   return 0;
}
