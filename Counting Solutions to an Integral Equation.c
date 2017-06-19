#include <stdio.h>

int main (void) {
    long long int a;

    while(scanf("%lld", &a)==1) {
        printf("%lld\n", (((a>>1)+2)*((a>>1)+1))>>1);
    }
    return 0;
}
