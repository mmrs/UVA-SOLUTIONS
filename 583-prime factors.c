#include<stdio.h>
#include<math.h>
int main()
{
    /*freopen("F:\\in.txt","r",stdin);*/
    int a,b,c,fctr[100],i,srt,flag;
    while(scanf("%d",&a)&&a)
    {
        if(a==1 || a==-1)
            continue;
        flag=0;
        c=a;
        if(a<0)
            a=-a;
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
        printf("%d = ",c);
        if(c<0 && flag==1)
            printf("-1 x %d\n",-c);
        else if(c>0 && flag==1)
            printf("%d\n",c);
        else
        {
            if(c<0)
                printf("-1 x ");
            for(b=0; b<i; b++)
            {
                if(b==i-1)
                    printf("%d\n",fctr[b]);
                else printf("%d x ",fctr[b]);
            }
        }
    }
    return 0;
}
