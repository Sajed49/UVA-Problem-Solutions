#include <stdio.h>

int main (void) {
    int a, count=1;

    scanf("%d", &a);
    while(a--) {
        int b;
        unsigned int c,d=0;

        scanf("%d", &b);
        while(b--) {
            scanf("%u", &c);
            if(c>d) d=c;
        }

        printf("Case %d: %u\n", count++, d);
    }
    return 0;
}
