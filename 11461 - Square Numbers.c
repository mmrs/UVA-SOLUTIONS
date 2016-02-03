#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d;
    while(scanf("%d %d",&a,&b))
    {

        d=0;

        for(a=a; a<=b; a++)
        {
            c=sqrt(a);
            if (a==c*c)
                ++d;
        }
        printf("%d\n",d);
    }
    return 0;
}
