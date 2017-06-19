#include <stdio.h>
#include <math.h>

int main (void) {
    double a, b, c;
    while(scanf("%lf %lf %lf", &a, &b, &c)==3) {
        double s;
        if(a+b>c && b+c>a && c+a>b){
            s=(a+b+c)/2;
            s=sqrt(s*(s-a)*(s-b)*(s-c))*4/3;
            printf("%.3lf\n",s);
        }
        else printf("-1.000\n");

    }
    return 0;
}
