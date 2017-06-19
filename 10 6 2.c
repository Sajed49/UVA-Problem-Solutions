#include <stdio.h>
#include <math.h>

int main (void) {
    int a;
    scanf("%d", &a);

    while(a--) {
        double e;
        double c;
        scanf("%lf",&c);
        e=M_PI*(c/5)*(c/5);
        printf("%.2lf %.2lf\n",e, (c*((c*3)/5))-e);
    }
    return 0;
}
