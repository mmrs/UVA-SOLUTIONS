#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char nm[100];
    int i,len,pw,pans,sum;
    while(gets(nm))
    {
        if(strcmp(nm,"0")==0)
            break;
        len=strlen(nm);
        pw=len;
        sum=0;
        for(i=0; i<len; i++,pw--)
        {
            pans=pow(2,pw)-1;
            sum+=(pans*(nm[i]-48));
        }
        printf("%d\n",sum);

    }
    return 0;
}
