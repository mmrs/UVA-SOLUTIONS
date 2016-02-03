#include<stdio.h>
int main()
{
    int c=0,tag=0,d;
    unsigned long int N,bin[100],b;
    for(d=0;d<100;d++)
    {
        scanf("%lu",&N);
        if((int)N<0)
        break;
        if(N==0)
        {
        printf("0\n");
        continue;
        }
            while(N<1000000001)
        {
            while(N!=0)
            {
                b=N%3;
                N=N/3;
                bin[c]=b;
                c++;
            }
            tag=c-1;
            while(tag>=0)

            {
                printf("%lu",bin[tag]);
                tag--;

            }
            printf("\n");
            break;
        }
        c=0;
    }

    return 0;
}
