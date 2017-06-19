#include <stdio.h>

int main (void) {
    int a;
    while(scanf("%d", &a)==1 && a) {
        long long b=0, c=1, sum;
        while(a--) {
            sum=b+c;
            b=c;
            c=sum;
        }
        printf("%lld\n", sum);
    }
    return 0;
}
