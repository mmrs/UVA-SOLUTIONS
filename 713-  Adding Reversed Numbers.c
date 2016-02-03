#include<stdio.h>
#include<string.h>
int  main()
{
    int i,j,l1,l2,t,carry;
    char n1[202],n2[202];
    scanf("%d",&t);
    while(t--)
    {
        int res[202]= {0};
        scanf("%s %s",&n1,&n2);
        l1=strlen(n1);
        l2=strlen(n2);
        for(i=l1,j=l2; i<202; i++,j++)
        {
            n1[i]=n2[j]='0';
        }
        carry=0;
        for(i=0;i<l1||i<l2;i++)
        {
            res[i]=(carry+n1[i]+n2[i]-96)%10;
            carry=(carry+n1[i]+n2[i]-96)/10;
            res[i+1]=carry;
        }
        if(l2>l1)l1^=l2^=l1^=l2;
        i=0;
        while(res[i]==0)++i;
        for(;i<l1+1;i++)
        {
           if(i==l1 && res[i]>0)
                printf("%d",res[i]);
           else if(i<l1)printf("%d",res[i]);
        }
        printf("\n");
    }
    return 0;
}
