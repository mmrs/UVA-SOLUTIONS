#include<stdio.h>
#include<string.h>
int func(char nm[],int b)
{
    int len,a,mod,i;
    len=strlen(nm);
    mod=nm[0]-'0';
    for(i=0; i<len-1; i++)
    {
        a=nm[i]-'0';
        a=mod*10+(nm[i+1]-'0');
        mod=a%b;
    }
    if(mod==0)
        return 1;
    else return 0;
}
int main()
{
    char year[10000];
    int flag,flag2;
    while(scanf("%s",year)==1)
    {
        if(flag==1)
            printf("\n");
        flag2=flag=0;
        if((func(year,4)==1 && func(year,100)==0)|| func(year,400)==1)
        {
            printf("This is leap year.\n");
            flag2=flag=1;
        }
        if(func(year,15)==1)
        {
            printf("This is huluculu festival year.\n");
            flag=1;
        }
        if(flag2==1 && func(year,55)==1)
        {
            printf("This is bulukulu festival year.\n");
            flag=1;
        }
        if(flag!=1 && flag2!=1)
            printf("This is an ordinary year.\n\n");
    }
    return 0;
}
