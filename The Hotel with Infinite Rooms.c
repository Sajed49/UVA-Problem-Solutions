#include <stdio.h>

int main (void) {
    long long a, b;

    while(scanf("%lld %lld", &a, &b)==2) {
        for( ; b>0 ; ) {
            b-=a;
            a++;
        }
        printf("%lld\n",a-1);
    }
    return 0;
}
