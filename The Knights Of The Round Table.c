#include <stdio.h>
#include <math.h>

int main (void) {
    double a, b, c;

    while(scanf("%lf %lf %lf",&a,&b,&c)==3) {
        double area,s;

        if( !a || !b || !c) printf("The radius of the round table is: 0.000\n");
        else  {
            s=(a+b+c)/2;
            area=sqrt(s*(s-a)*(s-b)*(s-c))/s;
            printf("The radius of the round table is: %.3lf\n", area);
        }
    }
    return 0;
}
