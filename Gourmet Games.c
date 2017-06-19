#include <stdio.h>

int main (void) {
    int a;

    scanf("%d", &a);
    while(a--) {
        int b,c,d;
        int sum=0;

        scanf("%d %d", &b, &c);

        while(b>=c) {
            sum+=(b/c);
            d=b;
            b=(b/c)+(b%c);
        }

        (d==c) ? printf("%d\n", sum) : printf("cannot do this\n");
    }
    return 0;
}
