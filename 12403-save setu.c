#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,amount=0,tst;
    char txt[10],donate[]="donate",report[]="report";
    scanf("%d",&tst);
    for(a=0;a<tst;a++)
    {
        scanf("%s",txt);
        if(strcmp(txt,donate)==0)
        {
            scanf("%d",&b);
            amount+=b;
        }
        else if(strcmp(txt,report)==0)
            printf("%d\n",amount);

    }
    return 0;

}
