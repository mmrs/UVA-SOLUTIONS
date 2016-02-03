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
            mod=a%17;
        }
        if(mod==0 && len==1)
        break;
        else if(mod==0)
            printf("1\n");
        else printf("0\n");

    }
    return 0;
}
