#include<stdio.h>
#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<cstdlib>
#define sz 100
using namespace std;
int row,col;
char ar[sz][sz],ch;
vector<char>v;
typedef struct
{
    char a;
    int b;
}str;
str data[65];
int xx[]= {-1,0,0,1};
int yy[]= {0,-1,1,0,};
void dfs(int i,int j,char ch);
int cmp(const void *a,const void *b)
{
 str *x=(str *)a;
 str *y=(str *)b;
 if(x->b>y->b)
    return 0;
 else if(x->b==y->b)
 {
     if(x->a<y->a)
        return 0;
 }
 else return 1;
}
int main()
{
    int t,i,j,k,l,cnt,z;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        z=-1;
        scanf("%d %d",&row,&col);
        getchar();
        for(j=0; j<row; j++)
            gets(ar[j]);
        for(j=0; j<row; j++)
        {
            for(k=0; k<col; k++)
            {
                if(ar[j][k]!='.')
                {
                    v.push_back(ar[j][k]);
                    ch=ar[j][k];
                    dfs(j,k,ch);
                }
            }
        }
        sort(v.begin(),v.end());
        l=v.size();
        for(j=0;j<=l;)
        {
            cnt=j;
            ch=v[j];
            while(ch==v[j])
                j++;
                data[++z].a=ch;
                data[z].b=j-cnt;
        }
      // for(j=0;j<l;j++)
          //  printf("%c ",v[j]);
        //    printf("\n");
              qsort(data,z,sizeof(data[0]),cmp);
              printf("World #%d\n",i);
            for(j=0;j<z;j++)
                printf("%c: %d\n",data[j].a,data[j].b);

        v.clear();
    }
    return 0;
}
void dfs(int i,int j,char ch)
{
    int a,b;
    if(ar[i][j]==ch && i>=0 && i<row && j>=0 && j<col)
    {
        ar[i][j]='.';
        for(int k=0; k<4; k++)
        {
            a=i+xx[k];
            b=j+yy[k];
            dfs(a,b,ch);
        }
    }
    return;
}
