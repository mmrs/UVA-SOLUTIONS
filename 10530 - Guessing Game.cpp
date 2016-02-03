#include<stdio.h>
#include<cstring>


using namespace std;

int main()

{


    freopen("input.txt","r",stdin);
    int guess,i,j,low,high;
    char a[10],a1[10];

    while(scanf("%d",&guess)&&guess)
    {

        high=11;
        low=0;

        while(scanf("%s %s",&a,&a1)&& strcmp(a,"right")!=0)
        {


            if(!strcmp(a1,"high") && guess<=high)
                high=guess-1;
            else if(!strcmp(a1,"low") && guess>=low)
                low=guess+1;
            scanf("%d",&guess);

        }
        if(guess<low || guess>high || low>high)
            printf("Stan is dishonest\n");
        else  printf("Stan may be honest\n");



    }


    return 0;
}
