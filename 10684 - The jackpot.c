#include<stdio.h>
int main() {

    int n,i,max,dif,num;
    while(scanf("%d",&n) && n) {
        max = 0;
        dif = 0;
        for(i=0; i<n; i++) {
            scanf("%d",&num);
            dif+=num;
            if(dif<0)dif=0;
            if(dif>max)
                max = dif;
        }
        if(max<=0)
            printf("Losing streak.\n");
        else printf("The maximum winning streak is %d.\n",max);
    }

    return 0;
}
