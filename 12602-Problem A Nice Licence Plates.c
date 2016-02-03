#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d,tst;
    char nm[5];
    scanf("%d",&tst);
    for(a=0;a<tst;a++)
    {
        scanf("%3s-%4d",nm,&c);
        b=26*26*(nm[0]-'A')+26*(nm[1]-'A')+(nm[2]-'A');
        d=abs(b-c);
        if(d<=100)
            printf("nice\n");
        else printf("not nice\n");
    }
    return 0;
}
