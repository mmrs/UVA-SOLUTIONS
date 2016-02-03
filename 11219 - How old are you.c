#include<stdio.h>
int main()
{
    int tc,d1,d2,m1,m2,y1,y2,a,age;
    scanf("%d",&tc);
    for(a=1; a<=tc; a++)
    {
        scanf("%d/%d/%d\n%d/%d/%d",&d2,&m2,&y2,&d1,&m1,&y1);
        if(d2<d1)
        {
            --m2;
            if(m2<m1)
                --y2;
            age=y2-y1;
        }
        else if(m2<m1)
            age=y2-(y1+1);
        else age=y2-y1;
        if(age<0)
            printf("Case #%d: Invalid birth date\n",a);
        else if(age>130)
            printf("Case #%d: Check birth date\n",a);
        else    printf("Case #%d: %d\n",a,age);
    }
    return 0;
}
