#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int a=0;
    char ln[15],eng[]="HELLO",spn[]="HOLA",grmn[]="HALLO",frnc[]="BONJOUR",itl[]="CIAO",rsn[]="ZDRAVSTVUJTE";
    while(gets(ln))
    {
        a++;
        if(strcmp(ln,"#")==0)
            break;
        else if(strcmp(ln,eng)==0)
            printf("Case %d: ENGLISH\n",a);
        else if(strcmp(ln,spn)==0)
            printf("Case %d: SPANISH\n",a);
        else if(strcmp(ln,grmn)==0)
            printf("Case %d: GERMAN\n",a);
        else if(strcmp(ln,frnc)==0)
            printf("Case %d: FRENCH\n",a);
        else if(strcmp(ln,itl)==0)
            printf("Case %d: ITALIAN\n",a);
        else if(strcmp(ln,rsn)==0)
            printf("Case %d: RUSSIAN\n",a);
        else printf("Case %d: UNKNOWN\n",a);
    }
    return 0;
}
