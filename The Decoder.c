#include <stdio.h>

int main (void) {
    int a,b,c,d;

    while(scanf("%d", &c)==1) {
        a=0;
        b=1;
        while (a != c) {
            d=b;
            b=a+b;
            a=d;
        }
        if(a!=1)printf("%d\n", b );
        else printf("%d\n", b+1);
    }

    return 0;
}
