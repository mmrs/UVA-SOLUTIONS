#include<stdio.h>
#include<string.h>
#define max(a,b) a>b?a:b

int main()
{
    char ar[101][101];
    int i=0,l,j,mxline=0,mxlength=0;

    for(i=0;i<101;i++)
        for(j=0;j<101;j++)
            ar[i][j]=' ';

    while(gets(ar[mxline])){
          l = strlen(ar[mxline]);
          mxlength = max(mxlength,l);
          ar[mxline][l]=' ';
          mxline++;

    }
    for(i=0;i<mxlength;i++){
        for(j=mxline-1;j>=0;j--)
            printf("%c",ar[j][i]);
        printf("\n");
    }

    return 0;
}
