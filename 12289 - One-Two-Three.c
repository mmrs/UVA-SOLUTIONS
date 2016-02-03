#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,len,count,i,j,k,flag=0;
    char ad[8],one[]="one",two[]="two",three[]="three";
    scanf("%d ",&b);
    for(c=0; c<b; c++)
    {
        gets(ad);
        len=strlen(ad);
        count=0;
        flag=k=0;
        if(len==3)
        {
            for(i=0; i<len; i++)
            {
                for(j=0; j<len; j++)
                {
                    if(one[i]==ad[j])
                    {
                        count++;
                        break;
                    }
                }
                if(count==2)
                {
                    printf("1\n");
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
             count=0;
            for(i=0; i<len; i++)
            {
                for(j=0; j<len; j++)
                {
                    if(two[i]==ad[j])
                    {
                        count++;
                        break;
                    }
                }
                if(count==2)
                {
                    printf("2\n");
                    break;
                }
            }
            }

        }
        else if(len==5)
        {
            for(i=0; i<len; i++)
            {
                for(j=0; j<len; j++)
                {
                    if(three[i]==ad[j])
                    {
                        count++;
                        break;
                    }
                }
                if(count==4)
                {
                    printf("3\n");
                    break;
                }
            }

        }
    }
    return 0;
}

/*# include <stdio.h>
# include <string.h>
# include <ctype.h>

int main()
{
int n;
char a[7],chr;
scanf("%d%c",&n,&chr);
while(n--)
{

gets(a);
if(strlen(a)==5)
printf("3\n");
else if((a[0]=='o' && a[1]=='n')||
(a[0]=='o' && a[1]=='e')||
(a[1]=='n' && a[2]=='e')||
(a[0]=='o' && a[2]=='e')||
(a[0]=='o' && a[2]=='n'))
printf("1\n");
else
printf("2\n");

}

return 0;
}*/
