#include<stdio.h>
#include<ctype.h>
int main()
{
    int b=0,f=0;
    char ch;
    while(ch=getchar()!=EOF)
    {
    while((ch=tolower(getchar()))!='\n')
    {
     if(f==0 && ch>='a' && ch<='z')
             {
            ++b;
             f=1;
             }
             else if(ch<'a' || ch>'z')
             f=0;

        }
         printf("%d\n",b);
        b=0;
        f=0;

    }
    return 0;
}
