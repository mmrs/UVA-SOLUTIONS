#include<stdio.h>
#include<string.h>
int main()
{
    int f,e,a=0,b,count,d=1;
    char text[100],l;
    scanf("%d %c",&e,&l);
    for(f=1; f<=e; f++)
    {

        gets(text);
        count=strlen(text);

        for(a=0,b=0; b<count; a++,b++)
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
        printf("Case #%d: %d\n",f,d);
        d=0;
    }
    return 0;
}
