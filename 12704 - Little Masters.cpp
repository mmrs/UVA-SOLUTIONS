#include<stdio.h>
#include<math.h>
int main()
{
	double t,x,y,r;
	scanf("%lf",&t);
	while(t--)
	{
			scanf("%lf %lf %lf",&x,&y,&r);
			x=sqrt(x*x+y*y);
			printf("%.2lf %.2lf\n",r-x,r+x);
	
	}
	return 0;
}
