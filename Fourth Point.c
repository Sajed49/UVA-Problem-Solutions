#include <stdio.h>

int main (void) {
    double x1, x2, x3, x4, y1, y2, y3, y4;
    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4)==8) {
        double t1, t2;
        if(x1==x2 && y1==y2) {
            t1=x3;
            t2=y3;
            x3=x1;
            y3=y1;
            x1=t1;
            y1=t2;
        }
        else if(x1==x3 && y1==y3) {
            t1=x2;
            t2=y2;
            x2=x1;
            y2=y1;
            x1=t1;
            y1=t2;
        }
        else if(x1==x4 && y1==y4) {
            t1=x3;
            t2=y3;
            x3=x1;
            y3=y1;
            x1=t1;
            y1=t2;

            t1=x2;
            t2=y2;
            x2=x4;
            y2=y4;
            x4=t1;
            y4=t2;
        }
        else if(x2==x4 && y2==y4) {
            t1=x4;
            t2=y4;
            x4=x3;
            y4=y3;
            x3=t1;
            y3=t2;
        }
        else if(x3==x4 && y3==y4) {
            t1=x2;
            t2=y2;
            x2=x4;
            y2=y4;
            x4=t1;
            y4=t2;
        }
        printf("%.3lf %.3lf\n", x1+(x4-x3), y4-(y3-y1));
    }
    return 0;

}
