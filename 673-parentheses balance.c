#include<stdio.h>
#include<string.h>
int top,flag,i;
char br[130],stck[130];
void push(void);
void pop(void);
int main()
{
    int t,len;
    scanf("%d ",&t);
    while(t--)
    {
        gets(br);
        top=flag=0;
        len=strlen(br);
        for(i=0; i<len; i++)
        {
            if(br[i]=='('||br[i]=='[')
                push();
            else pop();
            if(flag==1)
                break;
        }
        if(top>0)flag=1;
        if(flag==0)
            printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
void push(void)
{
    stck[top++]=br[i];
    return;
}
void pop(void)
{
if (top==0)
{
    flag=1;
    return;
}
else if((br[i]==')'&&stck[--top]!='(') || (br[i]==']'&&stck[--top]!='['))
            flag=1;
            return;
}
