#include<stdio.h>
int main()
{
    char text[500];
    int count;
    for(count=0;(text[count]=getchar())!=EOF;count++)
    {
        if(text[count]=='\n')
        printf("\n");
        else printf("%c",text[count]-7);
    }
    return 0;
}
