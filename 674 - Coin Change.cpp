#include<stdio.h>
using namespace std;

int ways[8500];
int coinarr[] =
{ 1, 5, 10, 25, 50 };
bool flag[8500];

void coin(int taka)
{

	int i, j, curtk;
	flag[0] = true;
	ways[0] = 1;
	for (i = 0; i < 5; i++)
	{

		for (j = 0; j <= taka; j++)
		{
			curtk = j + coinarr[i];
			if (flag[j] == true)
			{
				ways[curtk] += ways[j];
				flag[curtk] = true;
			}
		}

	}
	return;
}
int main()
{

	coin(7489);
	int taka;
	while (scanf("%d", &taka) == 1)
		printf("%d\n", ways[taka]);

	return 0;

}
