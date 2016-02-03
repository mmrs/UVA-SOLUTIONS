#include<stdio.h>
int GCD(int i,int j)
{
    int a;
    if(i==0)
        return j;
    a=j%i;
    j=i;
    i=a;
    GCD(i,j);
}
int main()
{
    int G,N,i,j;
    while(scanf("%d",&N)&&N)
    {
        G=0;
        for(i=1; i<N; i++)
        {
            for(j=i+1; j<=N; j++)
                G+=GCD(i,j);
        }

        printf("%d\n",G);
    }
    return 0;
}

/*int GCD(int i,int j)
{
   int a;
   while(i)
   {
       a=j%i;
       j=i;
       i=a;
   }
   return j;
}*/
