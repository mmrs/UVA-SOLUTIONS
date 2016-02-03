#include<stdio.h>
int main()
{
    int a,test_case,trm1,trm2,final,attdnc,ct1,ct2,ct3,sum=0,ct_avrg=0;
    scanf("%d",&test_case);

    while(test_case<100)
    {

        for(a=1; a<=test_case; a++)

        {
            scanf("%d  %d  %d  %d  %d  %d  %d",&trm1,&trm2,&final,&attdnc,&ct1,&ct2,&ct3);
            if(trm1>=0 && trm1<=20)
                sum+=trm1;
            if(trm2>=0 && trm2<=20)
                sum+=trm2;
            if(final>=0 && final<=30)
                sum+=final;
            if(attdnc>=0 && attdnc<=10)
                sum+=attdnc;
            if((ct1>=0 && ct1<=20) && (ct2>=0 && ct2<=20) && (ct3>=0 && ct3<=20) && (ct1>=ct2 && ct1>=ct3))
                ct_avrg+=ct1;
            else if((ct1>=0 && ct1<=20) && (ct2>=0 && ct2<=20) && (ct3>=0 && ct3<=20) && (ct2>=ct3 && ct2>=ct1))
                ct_avrg+=ct2;
            else if((ct1>=0 && ct1<=20) && (ct2>=0 && ct2<=20) && (ct3>=0 && ct3<=20) && (ct3>=ct2 && ct3>=ct1))
                ct_avrg+=ct3;
            if((ct1>=0 && ct1<=20) && (ct2>=0 && ct2<=20) && (ct3>=0 && ct3<=20) && ((ct1>=ct2 && ct1<=ct3) || (ct1>=ct3 && ct1<=ct2)))
                ct_avrg+=ct1;
            else if(ct1>=0 && ct1<=20 && ct2>=0 && ct2<=20 && ct3>=0 && ct3<=20 && ((ct2>=ct1 && ct2<=ct3) || (ct2>=ct3 && ct2<=ct1)))
                ct_avrg+=ct2;
            else if(ct1>=0 && ct1<=20 && ct2>=0 && ct2<=20 && ct3>=0 && ct3<=20 && ((ct3>=ct2 && ct3<=ct1) || (ct3>=ct1 && ct3<=ct2)))
                    ct_avrg+=ct3;
            sum+=ct_avrg/2;

            if(sum>=90)
                printf("Case %d: A\n",a);
            else if(sum>=80 && sum<90)
                printf("Case %d: B\n",a);
            else if(sum>=70 && sum<80)
                printf("Case %d: C\n",a);
            else if(sum>=60 && sum<70)
                printf("Case %d: D\n",a);
            else
                printf("Case %d: F\n",a);

            ct_avrg=0;
            sum=0;
        }

        break;
    }
    return 0;
}
