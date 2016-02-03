#include<stdio.h>
#include<string.h>

int main()
{
   // freopen("in.txt","r",stdin);
    double lst[15][4];
    char c;
    double xul,yul,xlr,ylr,x,y;
    int i=0,j,cs=1,flag;
    while(scanf(" %c",&c)==1)
    {
        if(c=='*')break;
        ++i;
        scanf("%lf %lf %lf %lf",&xul,&yul,&xlr,&ylr);
        lst[i][0]=xul;
        lst[i][1]=yul;
        lst[i][2]=xlr;
        lst[i][3]=ylr;

    }
    while(scanf("%lf %lf",&x,&y)==2)
    {

        if(x==9999.9 && y==9999.9)
            break;
        flag=0;
        for(j=1; j<=i; j++)
        {
            if(x>lst[j][0] && lst[j][1]>y && lst[j][2]>x && y>lst[j][3])
            {
                printf("Point %d is contained in figure %d\n",cs,j);
                flag=1;
            }

        }
        if(flag==0)
            printf("Point %d is not contained in any figure\n",cs);
        cs++;

    }

    return 0;
}
