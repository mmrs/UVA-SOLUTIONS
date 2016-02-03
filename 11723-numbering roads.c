#include<stdio.h>
int main()
{
    int a,b,i=1,count;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0 && b==0)
            break;
        count=0;
        if(a-(27*b)>0)
        {
            printf("Case %d: impossible\n",i++);
            continue;
        }
        else
        {
            for(a-=b; a>=1; a-=b)
                    count++;
                printf("Case %d: %d\n",i++,count);
        }
    }
    return 0;
}
/*#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i=1,count;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0 && b==0)
            break;
        count=0;
        if(a-(27*b)>0)
        {
            printf("Case %d: impossible\n",i++);
            continue;
        }
        else
        {
            a-=b;
            a=ceil((double)a/b);
                printf("Case %d: %d\n",i++,a);
        }
    }
    return 0;
}
*/
