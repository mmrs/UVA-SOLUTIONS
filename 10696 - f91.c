#include<stdio.h>
int main()
{
    int nmbr;
    while(scanf("%d",&nmbr)==1)
{
    if(nmbr==0)
    break;
    if(nmbr<=100)
    printf("f91(%d) = 91\n",nmbr);
    else if(nmbr>=101)
    printf("f91(%d) = %d\n",nmbr,nmbr-10);

}
    return 0;
}
