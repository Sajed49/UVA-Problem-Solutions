#include <stdio.h>
#include <math.h>

int main (void) {
    double r, arm;
    while(scanf("%lf %lf", &r, &arm)==2) {
        double area;

        area=(sin((2*M_PI)/arm))*r*r*.5*arm;
        printf("%.3lf\n",area);

    }
    return 0;
}
