#include <stdio.h>

int main (void) {
    int a, b, c,d, sum;

    while (scanf("%d", &a)==1) {
        for(b=a,c=a; b>2 ; ) {
            c= c + b/3;
            b=(b/3) +(b%3);
        }
        sum=c;

        for(b=a+1,c=a; b>2 ; ) {
            c= c + b/3;
            b=(b/3) +(b%3);
        }

        if(sum<c && b>0) sum=c;


        for(b=a+2,c=a; b>2 ; ) {
            c= c + b/3;
            b=(b/3) +(b%3);
        }

        if(sum<c && b>1) sum=c;

        printf("%d\n", sum);

    }

    return 0;
}
