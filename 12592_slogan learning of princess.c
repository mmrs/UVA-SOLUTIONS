#include<stdio.h>
#include<string.h>
int main()
{
    char arr[40][100],m,tmp[100];
    int a,b,i,n=0,ts,j;
    scanf("%d",&a);    /*show the comment bellow*/
    scanf("%c",&m);
    for(b=0; n<a*2; b++)
    {
        gets(arr[b]);
        n++;
    }
    scanf("%d",&ts);
    for(i=0; i<=ts; i++)        /* i<ts lekhle prblm ta holo ts near por \n ta gets e niye nay. i<n lekhle scanf erkm hobe scanf("%d ",&ts);*/
    {
        gets(tmp);
        for(j=0; j<b; j+=2)
        {
            if(strcmp(tmp,arr[j])==0)
            {
                puts(arr[j+1]);
                break;
            }
        }
    }
    return 0;
}
