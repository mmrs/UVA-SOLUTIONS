#include<stdio.h>
int main()
{
    int a,b,c,bin[200],tag=0,count;
    while(scanf("%d",&a)==1)

    {
        c=count=0;
        if(a==0)
            break;
        while(a!=0)
        {
            b=a%2;
            a=a/2;
            bin[c]=b;
            c++;
        }
        tag=c-1;
        for(c=0; c<=tag; c++)
            if(bin[c]==1)
                ++count;
        printf("The parity of ");
        while(tag>=0)
        {
            printf("%d",bin[tag]);
            tag--;
        }
        printf(" is %d (mod 2).\n",count);

    }
    return 0;
}

