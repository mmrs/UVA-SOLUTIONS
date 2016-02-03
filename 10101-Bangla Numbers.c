#include<stdio.h>

int main()
{

    long long num,actual;
    int chk,cas = 1;
    while(scanf("%lld",&num)==1)
    {
        actual = num;
        printf("%4d.",cas++);
        if(!num)printf(" 0");
        chk = num/100000000000000;
        num%=100000000000000;
        if(chk)
            printf(" %d kuti",chk);
        chk = num/1000000000000;
        num%=1000000000000;
        if(chk)
            printf(" %d lakh",chk);
        chk = num/10000000000;
        num%=10000000000;
        if(chk)
            printf(" %d hajar",chk);
        chk = num/1000000000;
        num%=1000000000;
        if(chk)
            printf(" %d shata",chk);
        chk = num/10000000;
        num%=10000000;
        if(actual>10000000 && !chk)
                printf(" kuti");
        if(chk)
            printf(" %d kuti",chk);
        chk = num/100000;
        num%=100000;
        if(chk)
            printf(" %d lakh",chk);
        chk = num/1000;
        num%=1000;
        if(chk)
            printf(" %d hajar",chk);
        chk = num/100;
        num%=100;
        if(chk)
            printf(" %d shata",chk);
        if(num)
            printf(" %d",num);
        printf("\n");
    }

    return 0;
}

