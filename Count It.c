#include <stdio.h>

int main (void) {
    int test;

    scanf("%d", &test);

    while(test--) {
        long long int num;
        int sum=0;

        scanf("%lld", &num);
        for( ;num; num/=2 ) {
            sum+=(num%2);
        }

        printf("%d\n",sum);
    }

    return 0;
}
