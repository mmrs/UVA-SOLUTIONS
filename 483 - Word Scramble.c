#include<stdio.h>
#include<string.h>
int main()
{
    int a=0,i,j,tag,tag2,tag3;
    char text[1000];
    while(gets(text))
    {
        a=strlen(text);
        tag=a;
        for(a=0; a<tag; a++)
        {
            tag3=a;
            while(text[a]!=' '&& text[a]!='\n' && a<tag)
                ++a;
            tag2=a;
            for(a--; a>=tag3; a--)
                printf("%c",text[a]);
            if(text[tag2]==' ')
                printf(" ");
            a=tag2;
        }
        printf("\n");
    }
    return 0;
}
