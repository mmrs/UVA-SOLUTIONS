#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<queue>
#include<vector>
#include<cstring>
#include<algorithm>
#define sz 2500

using namespace std;
int comp(const void *a,const void *b);

int bfs();
int xx[] = { -1, 0, 0,1};
int yy[] = { 0, -1, 1, 0};
int row,col;
char ar[50][50],ch;
queue<int>q1;
queue<int>q2;
typedef struct
{
    char ch;
    int n;
} str;
str data[sz];
int main()

{
#ifndef ONLINE_JUDGE
   // freopen("H:\\C_Codes\\input.txt","r",stdin);
#endif
    int i,sc,j,cnt=1;
    while(scanf("%d %d",&row,&col)==2)
    {
        getchar();
        if(row==0 && col==0)
            break;
        sc=-1;
        for(i=0; i<row; i++)
            gets(ar[i]);
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                if(ar[i][j]!='.')
                {
                    ch=ar[i][j];
                    data[++sc].ch=ch;
                    ar[i][j]='.';
                    q1.push(i);
                    q2.push(j);
                    data[sc].n=bfs();
                }
            }
        }
      //  for(i=0; i<=sc; i++)
       //     printf("%c %d\n",data[i].ch,data[i].n);
      //  printf("\n");
        qsort(data,sc+1,sizeof(data[0]),comp);
        printf("Problem %d:\n",cnt++);
        for(i=0; i<=sc; i++)
            printf("%c %d\n",data[i].ch,data[i].n);
      //  printf("\n");
    }
    return 0;
}
int bfs()
{
    int cnt=0;
    int x,y,a,b,c;
    while(!q1.empty())
    {
        cnt++;
        x=q1.front();
        q1.pop();
        y=q2.front();
        q2.pop();
        for(a=0; a<4; a++)
        {
            b=x+xx[a];
            c=y+yy[a];
            if(b>=0 && b<row && c>=0 && c<col && ar[b][c]==ch)
            {
                ar[b][c]='.';
                q1.push(b);
                q2.push(c);
            }
        }
    }
    return cnt;
}
int comp(const void *a,const void *b)
{
    str *x=(str*)a;
    str *y=(str*)b;
    if(x->n<y->n)
        return 1;
    else if(x->n==y->n)
    {                                        //return((x->ch-y->ch))
        if(x->ch>y->ch)
        return 1;
        else return 0;

    }
    else return 0;
}
