#include <stdio.h>

int main (void) {
    int a, b;
    scanf("%d", &a);

    for(b=0; b<a; b++) {
        int e, f , c, d=0;
        scanf("%d %d %d", &e, &f, &c);

        for( e+=f ; e>=c ; ) {
            d+=(e/c);
            e = (e/c) + (e%c);
        }
        printf("%d\n", d);
    }

    return 0;
}
