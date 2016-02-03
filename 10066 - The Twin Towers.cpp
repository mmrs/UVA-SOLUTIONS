#include <bits/stdc++.h>
#define sz 105

using namespace std;

int dp[sz][sz];
int ar[sz], br[sz];
int l1, l2;

int lcs(int i, int j)
{
	int p2, p3;

	if (l1 == i || l2 == j)
		return 0;
	if (dp[i][j] != -1)
		return dp[i][j];
	if (ar[i] == br[j])
		return dp[i][j] = lcs(i + 1, j + 1) + 1;
	p2 = lcs(i, j + 1);
	p3 = lcs(i + 1, j);
	return dp[i][j] = max(p2, p3);

}
int main()
{
	//freopen("in.txt","r",stdin);
	int cs = 1;
	while (scanf("%d %d",&l1,&l2)==2)
	{
		if(l1==0 && l2==0)
			break;
		for(int i=0;i<l1;i++)
			scanf("%d",&ar[i]);
		for(int i=0;i<l2;i++)
			scanf("%d",&br[i]);
		memset(dp, -1, sizeof dp);
		int ans = lcs(0,0);
		printf("Twin Towers #%d\nNumber of Tiles : %d\n\n",cs++, ans);

	}
	return 0;
}
