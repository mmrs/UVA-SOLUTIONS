#include<stdio.h>
int main()
{
    int a=0,c=0,d;
    char ch[1000];
    for(c=0; (ch[c]=getchar())!='*'; ++c)
    {
        if(ch[c]!='\n')
        {
            if(ch[c]=='j' && ch[c-1]=='j' &&ch[c-2]=='a' && ch[c-3]=='H')
                printf("Case %d: Hajj-e-Akbar",++a);
            else if(ch[c]=='h' && ch[c-1]=='a'&&ch[c-2]=='r'&& ch[c-3]=='m'&& ch[c-4]=='U')
                printf("Case %d: Hajj-e-Asghar",++a);
        }
        if(ch[c]=='\n')
            printf("\n");
    }
    return 0;
}
