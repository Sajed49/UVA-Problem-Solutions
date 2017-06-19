#include <stdio.h>

int main (void) {
    int a,b,c,d,e,f;

    while(scanf("%d %d", &b, &c) == 2) {
        a=b;
        f=0;
        while(a>=c) {
            d= a/c;
            e= a%c;
            a= d+e;
            f= f+d;
        }
        printf("%d\n", b+f);
    }

    return 0;
}
