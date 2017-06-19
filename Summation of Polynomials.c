#include <stdio.h>

int main (void) {
    long double a, b;
    while(scanf("%Lf", &a)==1) {
        b=(a*(a+1))/2;
        printf("%.0Lf\n",b*b);
    }
    return 0;
}
