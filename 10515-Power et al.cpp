#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int m,n,i,n1;
    string x,y;
    int a[4][4]= {{6,2,4,8},{1,3,9,7},{1,7,9,3},{6,8,4,2}};
    int b[2][2]= {{6,4},{1,9}};
    while(cin>>x>>y)
    {
        if(x=="0" && y=="0")
            break;
        m=x[x.size()-1]-'0';
        n1=n=0;
        for(i=0;y[i];i++)
            n=(n*10+y[i]-'0')%4;
            for(i=0;y[i];i++)
            n1=(n1*10+y[i]-'0')%2;

     //  printf("%d %d %d\n",m,n,n1);
        if(m==0)
            printf("0\n");
        else if(m==1)
            printf("1\n");
        else if(m==5)
            printf("5\n");
        else if(m==6)
            printf("6\n");
        else if(m==2)
            printf("%d\n",a[0][n]);
        else if(m==3)
            printf("%d\n",a[1][n]);
        else if(m==7)
            printf("%d\n",a[2][n]);
        else if(m==8)
            printf("%d\n",a[3][n]);
        else if(m==4)
            printf("%d\n",b[0][n1]);
        else if(m==9)
            printf("%d\n",b[1][n1]);
            else printf("0\n");

    }
    return 0;

}
/*

#include<cstdio>
#include<cstring>
char i,lastdigit,lenm,lenn,m[105],mod4,n[105];
char last[][4] = {{0,0,0,0},{1,1,1,1},{6,2,4,8},{1,3,9,7},{6,4,6,4},
    {5,5,5,5},{6,6,6,6},{1,7,9,3},{6,8,4,2},{1,9,1,9}
};
int main(void)
{
    while(scanf("%s %s",&m,&n) && (m[0]!='0' || n[0]!='0'))
    {
        lenm = strlen(m);
        lastdigit = m[lenm-1]-'0';
        if(n[0] == '0') printf("1\n");
        else
        {
            for(mod4 = i = 0; n[i]; i++)
                mod4 = (mod4*10+n[i]-'0')%4;
                printf("mod4 %d\n",mod4);
            printf("%u\n",last[lastdigit][mod4]);
        }
    }
    return 0;
}
*/
