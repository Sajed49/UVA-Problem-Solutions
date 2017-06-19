#include <stdio.h>

int main (void) {
    int a;
    scanf("%d", &a);
    while(a--) {
        int c;
        long long int b;
        scanf("%lld %d",&b, &c);
        printf("%lld\n", (b*((c-b)+(c-1)))/2);
    }
    return 0;
}
