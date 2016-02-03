#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<queue>
#include<vector>
#include<cstring>
#include<algorithm>
#include<set>
#include<sstream>
#include<map>
using namespace std;


int main()

{
#ifndef ONLINE_JUDGE
//freopen("in.txt","r",stdin);
#endif
    char mn[25],ms[25],pl[25],mpl[25],mrr[25];
    int i,j,k,l;
    int pli,msi,mpli;
    char mcmp[100]= {'0'};
    mcmp['A']='A';
    mcmp['E']='3';
    mcmp['H']='H';
    mcmp['I']='I';
    mcmp['J']='L';
    mcmp['L']='J';
    mcmp['M']='M';
    mcmp['O']='O';
    mcmp['S']='2';
    mcmp['T']='T';
    mcmp['U']='U';
    mcmp['V']='V';
    mcmp['W']='W';
    mcmp['X']='X';
    mcmp['Y']='Y';
    mcmp['Z']='5';
    mcmp['1']='1';
    mcmp['2']='S';
    mcmp['3']='E';
    mcmp['5']='Z';
    mcmp['8']='8';


    while(gets(mn))
    {
        l=strlen(mn);
       //  printf("mn %s\n",mn);
        pli=msi=mpli=0;
        for(j=0,i=l-1; i>=0; j++,i--)
            pl[j]=mn[i];
        pl[j]='\0';
       // printf("pl %s\n",pl);
        if(strcmp(pl,mn)==0)
            pli=1;
        for(i=0; i<l; i++)
            if(mcmp[mn[i]]!='0')
                mrr[i]=mcmp[mn[i]];
        mrr[i]='\0';
       // printf("mrr %s\n",mrr);
        for(j=0,i=l-1; i>=0; j++,i--)
            ms[j]=mrr[i];
        ms[j]='\0';
       // printf("ms %s\n",ms);
        if(strcmp(ms,mn)==0)
            msi=1;
        for(j=0,i=l-1; i>=0; j++,i--)
            mpl[j]=mrr[i];
        mpl[j]='\0';
      // printf("mpl %s\n",mpl);
        if(strcmp(mpl,pl)==0)
            mpli=1;
       // printf("pli %d msi %d mpli %d\n",pli,msi,mpli);
      if(pli==1 && mpli==1)
        printf("%s -- is a mirrored palindrome.\n\n",mn);
      else if(pli==1)
        printf("%s -- is a regular palindrome.\n\n",mn);
      else if(msi==1)
        printf("%s -- is a mirrored string.\n\n",mn);
      else printf("%s -- is not a palindrome.\n\n",mn);

    }
    return 0;
}

