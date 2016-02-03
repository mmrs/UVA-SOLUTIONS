#include<stdio.h>
int main()
{
    int a,b,c,TC;
    char d;
    scanf("%d",&TC);

    for(b=0; b<TC; b++)

    {
        scanf("%d %c %d",&a,&d,&c);
        if(a==12 && c==0)
            printf("%2.2d%c%2.2d\n",a,d,c);
        else if(a==12 && c>=1 && c<=59)
            printf("%2.2d%c%2.2d\n",11,d,60-c);
        else if(a==1 && c==0)
            printf("%2.2d%c%2.2d\n",11,d,c);
        else if(a==1 && c>=1 && c<=59)
            printf("%2.2d%c%2.2d\n",10,d,60-c);
        else if(a==2 && c==0)
            printf("%2.2d%c%2.2d\n",10,d,c);
        else if(a==2 && c>=1 && c<=59)
            printf("%2.2d%c%2.2d\n",9,d,60-c);
        else if(a==3 && c==0)
            printf("%2.2d%c%2.2d\n",9,d,c);
        else if(a==3 && c>=1 && c<=59)
            printf("%2.2d%c%2.2d\n",8,d,60-c);
        else if(a==4 && c==0)
            printf("%2.2d%c%2.2d\n",8,d,c);
        else if(a==4 && c>=1 && c<=59)
            printf("%2.2d%c%2.2d\n",7,d,60-c);
        else if(a==5 && c==0)
            printf("%2.2d%c%2.2d\n",7,d,c);
        else if(a==5 && c>=1 && c<=59)
            printf("%2.2d%c%2.2d\n",6,d,60-c);
        else if(a==6 && c==0)
            printf("%2.2d%c%2.2d\n",a,d,c);
        else if(a==6 && c>=1 && c<=59)
            printf("%2.2d%c%2.2d\n",5,d,60-c);
        else if(a==7 && c==0)
            printf("%2.2d%c%2.2d\n",5,d,c);
        else if(a==7 && c>=1 && c<=59)
            printf("%2.2d%c%2.2d\n",4,d,60-c);
        else if(a==8 && c==0)
            printf("%2.2d%c%2.2d\n",4,d,c);
        else if(a==8 && c>=1 && c<=59)
            printf("%2.2d%c%2.2d\n",3,d,60-c);
        else if(a==9 && c==0)
            printf("%2.2d%c%2.2d\n",3,d,c);
        else if(a==9 && c>=1 && c<=59)
            printf("%2.2d%c%2.2d\n",2,d,60-c);
        else if(a==10 && c==0)
            printf("%2.2d%c%2.2d\n",2,d,c);
        else if(a==10 && c>=1 && c<=59)
            printf("%2.2d%c%2.2d\n",1,d,60-c);
        else if(a==11 && c==0)
            printf("%2.2d%c%2.2d\n",1,d,c);
        else if(a==11 && c>=1 && c<=59)
            printf("%2.2d%c%2.2d\n",12,d,60-c);
    }
    return 0;
}
