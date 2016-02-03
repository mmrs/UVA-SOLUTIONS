#include<stdio.h>
#include<string.h>
int main()
{
    char nm[1005];
    int mod,len,a,i;
    while(scanf("%s",nm)==1)
    {
        len=strlen(nm);
        mod=nm[0]-'0';
        for(i=0; i<len-1; i++)
        {
            a=nm[i]-'0';
            a=mod*10+(nm[i+1]-'0');
            mod=a%11;
        }
        if(mod==0 && len==1)
        break;
        else if(mod==0)
            printf("%s is a multiple of 11.\n",nm);
        else printf("%s is not a multiple of 11.\n",nm);

    }
    return 0;
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char nm[1005];
    int ans,len,a,i;
    while(scanf("%s",nm)==1)
    {
        len=strlen(nm);
        ans=0;
        for(i=0; i<len; i++)
        {
            ans=ans*10+nm[i]-'0';
            ans=ans%11;
        }
        if(ans==0 && len==1)
            break;
        else if(ans==0)
            printf("%s is a multiple of 11.\n",nm);
        else printf("%s is not a multiple of 11.\n",nm);

    }
    return 0;
}
*/
