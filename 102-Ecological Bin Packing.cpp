#include<bits/stdc++.h>

using namespace std;

int main()
{

	//freopen("in.txt","r",stdin);
	int b1, g1, c1, b2, g2, c2, b3, g3, c3, ans[6], i, min, pt; // ans array for these combination BCG BGC CBG CGB GBC GCB
	while (cin >> b1 >> g1 >> c1 >> b2 >> g2 >> c2 >> b3 >> g3 >> c3)
	{

		ans[0] = g1 + c1 + b2 + g2 + b3 + c3;    //BCG
		ans[1] = g1 + c1 + b2 + c2 + b3 + g3;    //BGC
		ans[2] = b1 + g1 + g2 + c2 + b3 + c3;    //CBG
		ans[3] = b1 + g1 + b2 + c2 + g3 + c3;	 //CGB
		ans[4] = b1 + c1 + g2 + c2 + b3 + g3;    //GBC
		ans[5] = b1 + c1 + b2 + g2 + g3 + c3;    //GCB

		min = ans[0]; pt = 0; for (i = 1; i < 6; i++) 
		{
			if (ans[i] < min)
			{
				min = ans[i];
				pt = i;
			}

		}
		if (pt == 0)
			cout << "BCG ";
		else if (pt == 1)
			cout << "BGC ";
		else if (pt == 2)
			cout << "CBG ";
		else if (pt == 3)
			cout << "CGB ";
		else if (pt == 4)
			cout << "GBC ";
		else
			cout << "GCB ";
		cout << min << "\n";

	}

	return 0;
}
