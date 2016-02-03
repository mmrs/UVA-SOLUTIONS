#include<stdio.h>
#include<iostream>
#include<set>
#include<cstring>
#include<iterator>
#include<cctype>


using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);
	set<string>s;
	int i,l;
	char ar[205];
	while(gets(ar))
	{
		string x="";
		l=strlen(ar);
		for(i=0;i<=l;i++)
		{			
			if(isalpha(ar[i]))
				x+=tolower(ar[i]);
				else if(x!="")
				{
						s.insert(x);
						x="";
				}	
		}	
	}
	for(set<string>::iterator it=s.begin();it!=s.end();it++)
	cout<<*it<<endl;
	
	return 0;
}
