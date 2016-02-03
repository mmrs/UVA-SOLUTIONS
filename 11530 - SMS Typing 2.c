#include<stdio.h>

int main()
{
    int f,e,a=0,b,count,d;
    char text[100];
 scanf("%d",&e);
    for(f=0; f<=e; f++)
    {
        d=0;
       for(a=0;(text[a]=getchar())!='\n';a++);
        count=a;

        for(a=0,b=0; b<=count; a++,b++)
        {
            if(text[a]=='a'||text[a]=='d'||text[a]=='g'||text[a]=='j'||text[a]=='m'||text[a]=='p'||text[a]=='t'||text[a]=='w'||text[a]==' ')
                ++d;
            else if(text[a]=='b'||text[a]=='e'||text[a]=='h'||text[a]=='k'||text[a]=='n'||text[a]=='q'||text[a]=='u'||text[a]=='x')
                d+=2;
            else if(text[a]=='c'||text[a]=='f'||text[a]=='i'||text[a]=='l'||text[a]=='o'||text[a]=='r'||text[a]=='v'||text[a]=='y')
                d+=3;
            else if(text[a]=='s' || text[a]=='z')
                d+=4;
        }
        if(d>0)
        printf("Case #%d: %d\n",f,d);
        a=0;
    }

    return 0;
}
