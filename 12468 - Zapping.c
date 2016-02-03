#include<stdio.h>
int main()
{
    int ch1,ch2,dif,alt;
    while(scanf("%d %d",&ch1,&ch2)==2)
    {
        if(ch1==-1 && ch2==-1)
            break;
        if(ch1>ch2)
        {
            dif=ch1-ch2;
            alt=100-ch1+ch2;
            if(dif<alt)
                printf("%d\n",dif);
            else printf("%d\n",alt);
        }
        else if(ch1==ch2)
            printf("0\n");
        else
        {
            dif=ch2-ch1;
            alt=100-ch2+ch1;
            if(dif<alt)
                printf("%d\n",dif);
            else printf("%d\n",alt);
        }
    }
    return 0;
}
