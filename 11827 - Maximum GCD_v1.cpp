#include<stdio.h>
#include<sstream>
using namespace std;

int gcd(int a,int b);
int main()
{
    int t,i,j,gd,max,k,l;
    int ar[101];
    char nr[20000];
    char ch;
    scanf("%d\n",&t);
    for(i=0; i<t; i++)
    {
        gd=max=j=0;
        gets(nr);
        stringstream bujhi_na(nr);
        while(bujhi_na>>ar[j])
            j++;
        // for(k=0; k<j; k++)
        //    printf("%d ",ar[k]);
        // printf("\n");
        for(k=0; k<j; k++)
        {
            for(l=k+1; l<j; l++)
            {
                gd=gcd(ar[k],ar[l]);
                if(gd>max) max=gd;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
int gcd(int a,int b)
{
    if(a%b==0) return b;
    else return(gcd(b,a%b));
}
