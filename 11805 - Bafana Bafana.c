#include<stdio.h>
int main()
{
    int Tc,b,plr,strt,d,pas;
    scanf("%d",&Tc);
    for(b=1; b<=Tc; b++)
    {
        scanf("%d %d %d",&plr,&strt,&pas);
        for(d=1; d<=pas; d++)
        {
            strt++;
            if(strt>plr)
                strt=1;
        }
        printf("Case %d: %d\n",b,strt);
    }
    return 0;
}
