#include <stdio.h>

int main (void) {
    long long int a;
    while(scanf("%lld", &a)==1 && a) {
        if(a>100) printf("f91(%lld) = %d\n", a, a-10);
        else printf("f91(%lld) = 91\n",a);
    }

    return 0;
}
