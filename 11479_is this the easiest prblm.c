#include<stdio.h>
int main()
{
     int T,count;
     long int a,b,c;
    scanf("%d",&T);

    while(T<20)
    {
        for(count=1; count<=T; count++)

        {
            scanf("%ld %ld %ld",&a,&b,&c);

            while(1)
            {
                if(((a+b)<=c) || ((a+c)<=b) || (b+c)<=a)
                {
                    printf("Case %d: Invalid\n",count);
                    break;
                }
                if(a==b && a==c && b==c)

                {
                    printf("Case %d: Equilateral\n",count);
                    break;
                }
                if(a==b  || a==c || b==c)
                {
                    printf("Case %d: Isosceles\n",count);
                    break;
                }
                if(a!=b && a!=c && b!=c)
                {
                    printf("Case %d: Scalene\n",count);
                    break;
                }
            }
        }
        break;
    }
    return 0;
}
