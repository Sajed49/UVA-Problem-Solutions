#include <stdio.h>

int main (void) {
    int a, b, c,d=0,sum;

    scanf("%d", &a);

    while(d<a) {
        scanf("%d %d", &b,&c);
        if(!(b%2)) b=b+1;
        if(!(c%2)) c=c-1;

        sum=0;
        while(b<=c) {
            sum=sum+b;
            b= b+2;
        }
        printf("Case %d: %d\n", d+1, sum);
        d++;
    }

    return 0;
}
