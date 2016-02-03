#include<stdio.h>
#include<string.h>
int main()
{
    char nm[1001];
    int i,len,sum,count;
    while(gets(nm))
    {
        if(strcmp(nm,"0")==0)
            break;
        sum=0;
        len=strlen(nm);
        for(i=0; i<len; i++)
            sum+=nm[i]-48;
        if(sum%9!=0)
            printf("%s is not a multiple of 9.\n",nm);
        else
        {
            count=1;
            while(sum>9)
            {
                count++;
                len=0;
                while(sum>0)
                {
                    len+=sum%10;
                    sum/=10;
                }
                sum=len;
            }
            printf("%s is a multiple of 9 and has 9-degree %d.\n",nm,count);
        }
    }
    return 0;
}
