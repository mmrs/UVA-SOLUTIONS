#include<stdio.h>
#include<map>
#include<iostream>
#include<vector>

using namespace std;

map<string,int>mps;
map<int,string>mpi;
vector<string>vec;

int main()
{
    //freopen("in.txt","r",stdin);
    int n,i,ans,j,k,ppl,tk;
    string xx;
    bool flag=true;
    while(scanf("%d\n",&n)==1)
    {
        mps.clear();
        mpi.clear();
        vec.clear();
        for(i=0; i<n; i++)
        {
            cin>>xx;
            vec.push_back(xx);
            mps[xx]=0;
        }
        for(i=0; i<n; i++)
        {
            cin>>xx>>tk>>ppl;

            if(ppl)
            {
                mps[xx]-=tk;
                mps[xx]+=(tk-((tk/ppl)*ppl));
                tk=tk/ppl;
            }
            while(ppl--)
            {
                cin>>xx;
                mps[xx]+=tk;
            }

        }
        if(flag==false)printf("\n");
        flag=false;
        for(i=0; i<n; i++)
        {
            cout<<vec[i]<<" ";
            cout<<mps[vec[i]]<<"\n";
        }
    }
    return 0;
}
