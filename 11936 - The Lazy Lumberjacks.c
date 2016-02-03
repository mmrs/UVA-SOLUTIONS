#include<stdio.h>
int main()
{
    int tc,a,sd1,sd2,sd3;
    scanf("%d",&tc);
    for(a=0;a<tc;a++)
    {
        scanf("%d %d %d",&sd1,&sd2,&sd3);
        if(sd1+sd2>sd3)
        printf("OK\n");
        else printf("Wrong!!\n");
    }
    return 0;
}
