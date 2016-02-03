#include<stdio.h>
#define SZ 500
int main()
{
    int a,b=0,c,d,nm[SZ],tag;
    char txt[SZ]= {'0'};
    for(a=1; (txt[a]=getchar())!=EOF; a++)
    {

        tag=b;
        if((txt[a-1]!='B' && txt[a-1]!='F'&&txt[a-1]!='P'&&txt[a-1]!='V')&&(txt[a]=='B' || txt[a]=='F'||txt[a]=='P'||txt[a]=='V'))
            nm[b++]=1;
        else if((txt[a-1]!='C' && txt[a-1]!='G'&&txt[a-1]!='J'&&txt[a-1]!='K' && txt[a-1]!='Q' && txt[a-1]!='X'&&txt[a-1]!='S'&&txt[a-1]!='Z')&&(txt[a]=='C' || txt[a]=='G'||txt[a]=='J'||txt[a]=='K' || txt[a]=='Q' || txt[a]=='X'||txt[a]=='S'||txt[a]=='Z'))
            nm[b++]=2;
        else if((txt[a-1]!='D' && txt[a-1]!='T')&&(txt[a]=='D' || txt[a]=='T'))
            nm[b++]=3;
        else if(txt[a-1]!='L' && txt[a]=='L')
            nm[b++]=4;
        else if((txt[a-1]!='M' && txt[a-1]!='N')&&(txt[a]=='M' || txt[a]=='N'))
            nm[b++]=5;
        else if(txt[a-1]!='R'&&txt[a]=='R')
            nm[b++]=6;
        if(txt[a]=='\n')
        {
            for(b=0; b<tag; b++)
                printf("%d",nm[b]);
            printf("\n");
            a=b=0;

        }

    }
    return 0;
}
