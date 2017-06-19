#include <stdio.h>

int main (void) {
    long long int a;
    double d=0;
    int count=1;

    while(scanf("%lld", &a)==1) {
        d+=a;
        printf("%d\n", (int)(d/(count++)));
    }
    return 0;
}
