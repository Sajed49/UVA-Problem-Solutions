#include <stdio.h>
#include <math.h>

int main (void) {
    long long int a;
    while(scanf("%lld", &a)==1 && a) {
        register long long int b;
        b=sqrt(a);

        (b*b==a) ? printf("yes\n") : printf("no\n");
    }
    return 0;
}
