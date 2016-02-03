#include<stdio.h>
#include<string.h>
#include<queue>
#include<utility>
#define make_pair mp
using namespace std;

int d,r,c,time,flag;
char ar[32][32][32];
int dist[32][32][32];
struct data
{
    int ds,rs,cl;
    data () {}
    data(int a,int b,int c)
    {
        ds=a;
        rs=b;
        cl=c;
    }
};

int dd[]= {0,0,0,0,1,-1};
int rr[]= {0,1,0,-1,0,0};
int cc[]= {1,0,-1,0,0,0};

queue<data>q;

void bfs(void);
bool check_dim(int i,int j,int k)
{
    if(i<0 || j<0 || k<0 || i>=d || j>=r || k>=c)
        return false;
            return true;
}

int main()
{
   // freopen("in.txt","r",stdin);
    int i,j,k,call;
    while(scanf("%d %d %d\n",&d,&r,&c)==3)
    {
        if(d==0 && r==d && c==d )
            break;
        while(!q.empty())
            q.pop();
        memset(dist,0,sizeof dist);
        call=0;
        for(i=0; i<d; i++)
        {
            for(j=0; j<r; j++)
                gets(ar[i][j]);
            getchar();

        }
//        for(i=0; i<d; i++)
//        {
//            for(j=0; j<r; j++)
//                puts(ar[i][j]);
//                printf("\n");
//
//        }
        for(i=0; i<d; i++)
        {
            for(j=0; j<r; j++)
            {
                for(k=0; k<c; k++)
                {
                    if(ar[i][j][k]=='S')
                    {
                        flag=0;
                        dist[i][j][k]=0;
                        q.push(data(i,j,k));
                        bfs();
                        call=1;
                        break;
                    }

                }
                if(call==1)
                    break;
            }
            if(call==1)
                break;
        }
        if(flag==0)
            printf("Trapped!\n",time);

//        for(i=0; i<d; i++)
//        {
//            for(j=0; j<r; j++)
//                puts(ar[i][j]);
//            puts("____________");
//
//        }


    }
    return 0;

}

void bfs(void)
{
    int a,b,x,y,z,i,j,k;

    while(!q.empty())
    {
        data tmp=q.front();
        i=tmp.ds;
        j=tmp.rs;
        k=tmp.cl;
        q.pop();
       // printf("%d %d %d\n",i,j,k);
      //  for(a=0; a<3; a++)
            for(b=0; b<6; b++)
            {
                x=i+dd[b];
                y=j+rr[b];
                z=k+cc[b];
                if(check_dim(x,y,z)==false)
                    continue;

                if(ar[x][y][z]=='E')
                {
                    flag=1;
                     printf("Escaped in %d minute(s).\n",dist[i][j][k]+1);
                    return;
                }
                if(ar[x][y][z]=='.')
                {
                    dist[x][y][z]=dist[i][j][k]+1;
                //    printf("%d\n",dist[x][y][z]);
                    ar[x][y][z]='@';
                    q.push(data(x,y,z));

                  //  printf("%d %d %d\n",x,y,z);
                }
            }
    }

    return;
}
