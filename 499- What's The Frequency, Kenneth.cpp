#include<stdio.h>
#include<algorithm>
#include<string.h>

using namespace std;

struct data
{
    int pos,cnt;
};
int sortMethod(data a,data b)
{

    if(a.cnt==b.cnt)
        return a.pos<b.pos;
    else return a.cnt>b.cnt;
}


int main()
{
    char st[1000];
    while(gets(st))
    {
        data ar[125];
        int l;
        l = strlen(st);
        for(int i = 0; i<125; i++)
            ar[i].pos = i,ar[i].cnt=0;
        for(int i = 0; i<l; i++)
        {
            int f = st[i];
            if((f>=65 && f<=90) || (f>=97 && f<=122))
                ar[f].cnt++;
        }
        sort(ar,ar+123,sortMethod);

        int mx = ar[0].cnt;
        for(int i=0; i<55; i++)
        {
            if(ar[i].cnt!=mx)
                break;
            printf("%c",ar[i].pos);
        }
        printf(" %d\n",mx);

    }

    return 0;

}

