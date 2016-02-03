#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<queue>
#include<vector>
#include<cstring>
#include<string.h>
#include<cstring>
#include<algorithm>
#define sz  100
using namespace std;
int main()

{
#ifndef ONLINE_JUDGE
//freopen("H:\\C_Codes\\input.txt","r",stdin);
#endif
int t;
double r1,r2,r3,a,b,c,arc1,arc2,arc3,area_triangle,s,angl1,angl2,angl3,area_middle;
scanf("%d",&t);
while(t--)
{
    scanf("%lf %lf %lf",&r1,&r2,&r3);
    a=r2+r3;
    b=r1+r3;
    c=r1+r2;
    s=(a+b+c)/2;
    area_triangle=sqrt(s*(s-a)*(s-b)*(s-c));
   // printf("area %lf\n",area_triangle);
    angl1=acos((b*b+c*c-a*a)/(2.0*b*c));
    angl2=acos((a*a+c*c-b*b)/(2.0*a*c));
    angl3=acos((a*a+b*b-c*c)/(2.0*a*b));
    arc1=angl1*0.5*r1*r1;
    arc2=angl2*0.5*r2*r2;
    arc3=angl3*0.5*r3*r3;
  // printf("%lf %lf %lf\n",angl1,angl2,angl3);
    area_middle=area_triangle-arc1-arc2-arc3;
    printf("%.6lf\n",area_middle);

}
return 0;
}
