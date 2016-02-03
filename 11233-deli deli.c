#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i,j,flag,len;
    char a1[50][20],a2[50][20];
    scanf("%d %d ",&a,&b);
    for(i=0; i<a*2; i++)
        scanf("%s",a1[i]);
    for(i=0; i<b; i++)
        scanf("%s",a2[i]);
    for(i=0; i<b; i++)
    {
        flag=0;
        for(j=0; j<a*2; j+=2)
        {
            if(strcmp(a2[i],a1[j])==0)
            {
                puts(a1[j+1]);
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            len=strlen(a2[i]);
            if(a2[i][len-1]=='y'&&a2[i][len-2]!='a'&&a2[i][len-2]!='e'&&a2[i][len-2]!='i'&&a2[i][len-2]!='o'&&a2[i][len-2]!='u')
            {
                a2[i][len-1]='i';
                strcat(a2[i],"es");
                puts(a2[i]);
            }
            else if(a2[i][len-1]=='o'||a2[i][len-1]=='s'||a2[i][len-1]=='x'||(a2[i][len-1]=='h'&&(a2[i][len-2]=='c'||a2[i][len-2]=='s')))
            {
                strcat(a2[i],"es");
                puts(a2[i]);
            }
            else
            {
                strcat(a2[i],"s");
                puts(a2[i]);
            }
        }
    }
    return 0;
}
