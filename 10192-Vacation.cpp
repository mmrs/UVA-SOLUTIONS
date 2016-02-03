#include <bits/stdc++.h>

#define sz 105
using namespace std;
int dp[sz][sz];

char ar[sz], br[sz];
int l1, l2;

int lcs(int i, int j)
{
	int p1, p2, p3;

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

	int cs = 1;
	while (gets(ar))
	{
		if (ar[0] == '#')
			break;
		gets(br);
		memset(dp, -1, sizeof dp);
		l1 = strlen(ar);
		l2 = strlen(br);
		int ans = lcs(0, 0);
		printf("Case #%d: you can visit at most %d cities.\n", cs++, ans);
		//cout<<ans<<endl;

	}
	return 0;
}
