#include<stdio.h>

int main()
{
    int n, m, c;
    int capacity[25], flag[25], max, cap, blown,cs=1;
    while (scanf("%d %d %d", &n, &m, &c) == 3)
    {
        if(n==0 && m==0 && c==0)
            break;

        for (int i = 1; i <= n; i++)
            flag[i] = 0;
        for (int i = 1; i <= n; i++)
            scanf("%d", capacity + i);
        blown = max = cap = 0;
        for (int i = 1; i <= m; i++)
        {
            scanf("%d", &n);
            if (flag[n] == 0)
            {
                cap += capacity[n];
                flag[n] = 1;
                if (cap>c)
                    blown=1;
                if (cap > max)
                    max = cap;
            }
            else
            {
                cap -= capacity[n];
                flag[n] = 0;
            }
        }
        printf("Sequence %d\n",cs++);
        if(blown==1)
            printf("Fuse was blown.\n\n");
        else printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n\n",max);

    }
    return 0;
}

