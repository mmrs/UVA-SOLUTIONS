#include<stdio.h>
#include<math.h>
int ordr(const void *a,const void *b)
{
    return(*(int*)a-*(int*)b);
}
int main()
{
    int a,b,c,i,d,count;
    while(scanf("%d",&a)&&a)
    {
        d=a;
        int fctr[1000]= {0};
        i=0;
        for(; a>1; a--)
        {
            c=a;
            for(b=2; c!=1; b++)
            {
                if(c%b==0)
                {
                    fctr[i++]=b;
                    c/=b;
                    b=1;
                }
            }
        }
        qsort(fctr,i,sizeof(int),ordr);
        b=count=1;
        printf("%3d! =",d);
        for(a=0; a<i; a++)
        {
            if(b==16)printf("\n%6c",' ');
            if(fctr[a]!=fctr[a+1])
            {
                printf("%3d",count);
                count=1;
                b++;
            }
            else count++;
        }
        printf("\n");
    }
    return 0;
}

