#include<stdio.h>
int main()
{
    int C,a,b=0,c,d;
    double N,e,sum=0,nmbr[1000],nmbr_avrg,std=0;
    scanf("%d",&C);
    for(a=0; a<C; a++)
    {
        scanf("%lf",&N);
        while(N>=1 && N<=1000)
        {
            for(c=0; c<N; c++)
            {
                scanf("%lf",&nmbr[b]);
                while(nmbr[b]>=0 && nmbr[b]<=100)
                {
                    sum+=nmbr[b];
                    ++b;
                    break;
                }

            }
            nmbr_avrg=sum/N;

            b=0;
            for(d=0; d<N; d++)
            {
                if(nmbr[b]>nmbr_avrg)
                    std++;
                b++;

            }
            printf("%.3lf%c\n",std/N*100,'%');
            printf("");
            break;
        }
        b=std=sum=0;

    }
    return 0;
}
