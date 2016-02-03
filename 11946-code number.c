#include<stdio.h>
int main()
{
    int i,tst;
    char ar;
    scanf("%d ",&tst);
    while(ar=getchar())
    {
        if(ar==EOF)
            break;
        if(ar=='3')printf("E");
        else if(ar=='1')printf("I");
        else if(ar=='9')printf("P");
        else if(ar=='4')printf("A");
        else if(ar=='8')printf("B");
        else if(ar=='5')printf("S");
        else if(ar=='0')printf("O");
        else if(ar=='7')printf("T");
        else if(ar=='2')printf("Z");
        else if(ar=='6')printf("G");
        else printf("%c",ar);

    }
return 0;
}

/*#include<stdio.h>
int main()
{
    int i,tst;
    char ar[80000000];
    scanf("%d ",&tst);
    while(tst--)
    {
        for(i=0;ar[i]=getchar();i++)
        {
            if(ar[i]=='\n'&&ar[i-1]=='\n')
                break;
            if(ar[i]=='3')printf("E");
            else if(ar[i]=='1')printf("I");
            else if(ar[i]=='9')printf("P");
            else if(ar[i]=='4')printf("A");
            else if(ar[i]=='8')printf("B");
            else if(ar[i]=='5')printf("S");
            else if(ar[i]=='0')printf("O");
            else if(ar[i]=='7')printf("T");
            else if(ar[i]=='2')printf("Z");
            else if(ar[i]=='6')printf("G");
            else printf("%c",ar[i]);

        }
        if(tst>1)printf("\n");
    }
    return 0;
}
*/
