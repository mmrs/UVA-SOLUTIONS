#include<stdio.h>
int main()
{

    int k[40001]= {0};
    k[9]=k[45]=k[55]=k[99]=k[297]=k[703]=k[999]=k[2223]=k[2728]=k[4879]=k[4950]=k[5050]=k[5292]=k[7272]=k[7777]=k[9999]=k[17344]=k[22222]=k[38962]=1;

/* 9, 45, 55, 99, 297, 703, 999 , 2223, 2728, 4879, 4950, 5050, 5292, 7272, 7777, 9999 , 17344, 22222, 38962 */

    int t,i,j,x,y,flg;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d",&x,&y);
        flg=0;
        printf("case #%d\n",i);
        for(; x<=y; x++)
        {
            if(k[x]==1)
            {
                printf("%d\n",x);
                flg=1;
            }
        }
        if(flg==0)
            printf("no kaprekar numbers\n");
        if(i<t)
            printf("\n");
    }
    return 0;
}



//  kaprekar check
//
//        k=i*i;
//        part1=0;
//        part2=0;
//        dec=1;
//        while(k>=10)
//        {
//            part1=k/10;
//            part2=(k%10)*dec+part2;
//            dec=dec*10;
//            k=k/10;
//            if(part1!=0&&part2!=0&&part1+part2==i)
//            {
//                kaprekar[i]=1;
//                break;
//            }
//        }

//method 2
//int sq = num * num;
//    char res [20];
//
//    sprintf(res, "%d", sq);  sscanf is used to scanf from string and sprintf is used to print to string
//
//    string result = res;
//    int len = strlen(res);
//
//    for ( int i = 1; i < len; i++ )
//    {
//        string firstPart = result.substr(0, i);
//        string secondPart = result.substr(i, len - i);
//
//        int firstNum, secondNum;
//        stringstream ss (firstPart);
//        ss >> firstNum;
//
//        stringstream ss2 (secondPart);
//
//        ss2 >> secondNum;
//
//        if ( firstNum > 0 && secondNum > 0 && firstNum + secondNum == num) return true;
//    }
