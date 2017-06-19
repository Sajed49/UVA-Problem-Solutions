#include <stdio.h>

int main (void) {
    int a, b=1;

    scanf("%d", &a);

    for(; b<=a; b++) {
        float c,d;;
        scanf("%f %f", &c, &d);

        printf("Case %d: %.2f\n",b, c+((5.0/9.0)*d));
    }
    return 0;
}
