#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int l,a,i,j,count,m;
    char ar[10002];
    scanf("%d ",&a);
    while(a--)
    {
        count=0;
        gets(ar);
        l=strlen(ar);
        m=sqrt(l);

        if(l!=m*m)
        {
            printf("INVALID\n");
            continue;
        }
        for(i=0;i<l;i++)
        {
            for(j=i;j<l;j+=m)
            {
              printf("%c",ar[j]);
              count++;
              if(count==l)break;
            }
            if(count==l)break;
        }
        printf("\n");
    }
    return 0;
}
