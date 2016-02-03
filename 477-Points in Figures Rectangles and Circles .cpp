#include<stdio.h>
#include<math.h>

int main()
{
    //freopen("in.txt","r",stdin);
    double lst[15][6]; //pos 0,1,2,3=x1,y1,x2,y2 of rectangle  pos 4=radius if available pos 5= rectangle or circle rec=1,cicrcle=2
    char c,d;
    double xul,yul,xlr,ylr,x,y,rad;
    int i=0,j,cs=1,flag;
    while(scanf(" %c",&c)==1)
    {
        if(c=='*')break;
        ++i;
        if(c=='r')
        {
        scanf("%lf %lf %lf %lf",&xul,&yul,&xlr,&ylr);
        lst[i][0]=xul;
        lst[i][1]=yul;
        lst[i][2]=xlr;
        lst[i][3]=ylr;
        lst[i][5]=1.0;
        }
        else
        {
            scanf("%lf %lf %lf",&x,&y,&rad);
            lst[i][0]=x;
            lst[i][1]=y;
            lst[i][4]=rad;
            lst[i][5]=2.0;

        }
    }
    while(scanf("%lf %lf",&x,&y)==2)
    {

        if(x==9999.9 && y==9999.9)
            break;
        flag=0;
        for(j=1; j<=i; j++)
        {
            if(lst[j][5]==1.0 && x>lst[j][0] && lst[j][1]>y && lst[j][2]>x && y>lst[j][3])
            {
                printf("Point %d is contained in figure %d\n",cs,j);
                flag=1;
            }
            else if(lst[j][5]==2.0 && (sqrt(((x-lst[j][0])*(x-lst[j][0]))+((y-lst[j][1])*(y-lst[j][1]))))<lst[j][4])
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
