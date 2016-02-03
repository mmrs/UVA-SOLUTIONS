#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{

    char name1[30],name2[30];
    int tl1,tl2,a,b,d,c,len1,len2;
    double res;
    while(gets(name1))
    {
        gets(name2);
        len1=strlen(name1);
        len2=strlen(name2);
        tl1=tl2=0;
        for(a=0; a<len1; a++)
        {
            name1[a]=tolower(name1[a]);
            for(b=0; b<26; b++)
            {
                if(name1[a]==97+b)
                    tl1+=b+1;
            }
        }
        for(a=0; a<len2; a++)
        {
            name2[a]=tolower(name2[a]);
            for(b=0; b<26; b++)
            {
                if(name2[a]==97+b)
                    tl2+=b+1;
            }
        }
        d=0;
        while(tl1>=10)
            tl1=tl1%10+tl1/10;
        while(tl2>=10)
            tl2=tl2%10+tl2/10;
        if(tl1>tl2)
            res=((double)tl2/(double)tl1)*100;
        else if(tl1<tl2)
            res=((double)tl1/(double)tl2)*100;
        else if(tl1==tl2)
            res=100.0;
        printf("%.2lf %%\n",res);
    }
    return 0;
}
