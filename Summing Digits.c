#include <stdio.h>

int main (void) {
    double a,b;
    int sum;

    while (scanf("%lf", &a)==1) {
        if(!a) break;

        for( ; a>9; ) {
            for(sum = 0, b=a; b ; b=b/10) sum = sum + ((int)b%10);
            a=sum;
        }

        printf("%.0lf\n", a);
    }

    return 0;
}
