#include <stdio.h>

int main (void) {
    int a;
    while(scanf("%d",&a)==1 && a) {
        int b=1,c=0,d;
        for( ; a-- ; ) {
            d=b+c;
            c=b;
            b=d;
        }

        printf("%d\n", d);

    }
    return 0;

}
