#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <algorithm>
#include <iterator>
#include<cstring>
#include<stdlib.h>
using namespace std;
int length,dna;
void bubble(char a[],int i);
int comp(const void *a,const void *b);
typedef struct
{
    char sq[50];
    int flip;

} data;
data str[100];
int main()
{
#ifndef ONLINE_JUDGE
//freopen("H:\\C_Codes\\input.txt","r",stdin);
#endif
    int test_case,i;
    scanf("%d\n\n",&test_case);
    while(test_case--)
    {

        cin>>length>>dna;
        cin.ignore();
        for(i=0; i<dna; i++)str[i].flip=0;
        for(i=0; i<dna; i++)
            gets(str[i].sq);
        for(i=0; i<dna; i++)
            bubble(str[i].sq,i);
        //  cout<<endl;
        //  for(i=0;i<dna;i++)
        //   printf("%d\n",str[i].flip);
        //  cout<<endl;
        qsort(str,dna,sizeof(str[0]),comp);
        for(i=0; i<dna; i++)
            printf("%s\n",str[i].sq);
        if(test_case>0)
            cout<<endl;

    }
    return 0;
}
void bubble(char a[],int i)
{
    int j,k;
    for(k=0; k<length; k++)
    {
        for(j=k+1; j<length; j++)
        {
            if(a[k]>a[j])
                str[i].flip++;
        }
    }
    return;
}
int comp(const void *a,const void *b)
{
    data *x=(data *)a;
    data *y=(data *)b;
    if(x->flip>y->flip)
        return 1;
    else return 0;
}
