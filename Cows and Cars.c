#include <stdio.h>

int main (void) {
    double a, b, c;

    while(scanf("%lf %lf %lf", &a, &b, &c)==3) {
        double car, cow;
        car=((b-1)/((b-1)+(a-c)))*b;
        cow=(b/(a-1-c+b))*a;

        printf("%.5lf\n", (cow+car)/(a+b));
    }
    return 0;
}
