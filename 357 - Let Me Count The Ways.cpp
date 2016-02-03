#include<stdio.h>
using namespace std;

long long int ways[30100];
int coinarr[] = { 1, 5, 10, 25, 50 };
bool flag[30100];

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

    coin(30000);
    int taka;
    while (scanf("%d", &taka) == 1)
    {
        if (ways[taka] == 1)
            printf("There is only 1 way to produce %d cents change.\n",taka);
        else
            printf("There are %lld ways to produce %d cents change.\n", ways[taka],taka);

    }

    return 0;

}
