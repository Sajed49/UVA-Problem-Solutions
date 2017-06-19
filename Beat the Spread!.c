#include <stdio.h>

int main (void) {
    long long int i,a,b,c,d;


    scanf("%lld",&i);

    while(i) {
        scanf("%lld %lld", &a, &b);
        if(b>a || ((a-b)%2)) printf("impossible\n");
        else {
            c = (a+b)/2;
            d = (a-b)/2;
            printf("%lld %lld\n", c,d);
        }

        i--;
    }

    return 0;
}
