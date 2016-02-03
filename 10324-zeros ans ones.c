#include<stdio.h>
int main()
{
    int a,b,c,i,j,flag,k=1;
    char ar[1000002];
    while(scanf("%s",ar)==1)
    {
        if(strcmp(ar,"\n")==0)
            break;
        scanf("%d",&a);
        for(j=1;j<=a;j++)
        {
            scanf("%d %d",&b,&c);
            if(b>c)
                b^=c^=b^=c;
                flag=0;
                if(j==1)printf("Case %d:\n",k++);
            for(i=b;i<c;i++)
            {
                if(ar[i]!=ar[i+1])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}
