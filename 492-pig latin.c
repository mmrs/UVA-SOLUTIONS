#include<stdio.h>
int main()
{
    int a,b,c,d,flag;
    char g,v;
    while((g=getchar())!=EOF)
    {
        if((g<'a'||g>'z') &&(g<'A'||g>'Z'))
            printf("%c",g);
        else if(g=='a'||g=='A'||g=='e'||g=='E'||g=='i'||g=='I'||g=='o'||g=='O'||g=='u'||g=='U')
        {
            printf("%c",g);
            while((g=getchar())&&(g>='a'&&g<='z')||(g>='A'&&g<='Z'))
                printf("%c",g);
            printf("ay%c",g);
        }
        else if((g>='a'&&g<='z')||(g>='A'&&g<='Z'))
        {
            v=g;
            while((g=getchar())&&(g>='a'&&g<='z')||(g>='A'&&g<='Z'))
                printf("%c",g);
            printf("%cay%c",v,g);
        }
    }
    return 0;
}
