#include <stdio.h>

int main (void) {
    int a, b;
    long long int i,j,sum;

    scanf("%d", &a);
    for(; a; a--) {

        scanf("%d", &b);
        for(sum=0 ; b; b--){
            scanf("%lld %lld %lld", &i, &j, &j);
            sum= sum +(i*j);
        }
        printf("%lld\n", sum);
    }

    return 0;
}
