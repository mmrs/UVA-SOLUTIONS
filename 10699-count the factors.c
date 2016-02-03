#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,fctr[100],i,srt,flag;
    while(scanf("%d",&a)&&a)
    {
        flag=0;
        c=a;
        srt=sqrt(a);
        for(b=2,i=0; a!=1; b++)
        {
            if(a%b==0)
            {
                fctr[i]=b;
                i++;
                a/=b;
                b=1;
            }
            else if(b>=srt && i==0)
            {
                flag=1;
                break;
            }
        }
        srt=0;
        if(flag==1)
            printf("%d : 1\n",c);
        else
        {
            for(b=0; b<i; b++)
            {
                if(fctr[b]!=fctr[b-1])
                    srt++;
            }
            printf("%d : %d\n",c,srt);
        }
    }
    return 0;
}

