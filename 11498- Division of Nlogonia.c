#include<stdio.h>
int main()
{
    int tst,dx,dy,x,y;
    while(scanf("%d",&tst)&&tst)
    {
        scanf("%d %d",&dx,&dy);
        while(tst--)
        {
            scanf("%d %d",&x,&y);
            if(x==dx || y==dy)printf("divisa\n");
            else if(x<dx && y>dy)printf("NO\n");
            else if(x>dx && y>dy)printf("NE\n");
            else if(x>dx  && y<dy)printf("SE\n");
            else printf("SO\n");
        }
    }
    return 0;
}
