#include <stdio.h>

int main (void) {
    float a, b;
    while(scanf("%f %f", &a, &b)==2) {
        printf("%.0f\n", (a-1)+(b-1)*a);
    }
    return 0;
}
