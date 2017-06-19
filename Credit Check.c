#include <stdio.h>
int sum (char x);

int main (void) {
    int test;

    while(scanf("%d", &test)==1) {
        while(test--) {
            char number[4][5];
            int sum1=0, sum2=0;
            int i, mod;

            scanf("%s %s %s %s", &number[0], &number[1], &number[2], &number[3]);

            for(i=0; i<4; i++) {
                sum1+=(number[i][1]+number[i][3]-48-48);
            }

            for(i=0; i<4; i++) {
                sum2+=sum(number[i][0])+sum(number[i][2]);
            }

            sum1+=sum2;
            mod=(sum1%10);
            (!mod)? puts("Valid") : puts("Invalid");
        }
    }
    return 0;
}

int sum (char x) {
    int num=(x-48)*2;
    int sum=0;

    while(num) {
        sum+=(num%10);
        num/=10;
    }
    return sum;
}
