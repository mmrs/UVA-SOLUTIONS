#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main() {
    int l,w,h;
    double ans,angle,tri,lombo;
    while(scanf("%d %d %d %lf",&l,&w,&h,&angle)==4) {
        lombo = l*tan(angle*pi/180.0);
        if(lombo>h)
            ans = 0.5*h*h*l*w/lombo;     // not clear
        else {
            tri = 0.5*l*lombo*w;
            ans = (l*w*h)-tri;
        };
        printf("%.3lf mL\n",ans);
    }
    return 0;
}
