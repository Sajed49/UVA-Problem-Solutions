#include <stdio.h>

int main (void) {
    int atto[1000];
    int a, b, c, d, e, f, sum;

    while(scanf("%d", &a)==1) {
        for(b=0,c=1 ; b<a; b++) scanf("%d", &atto[b]);
        e=0;
        while(c) {
            for(b=0,c=0; b<a-1; b++) {
                if(atto[b]>atto[b+1]) {
                    d=atto[b];
                    atto[b]= atto[b+1];
                    atto[b+1]= d;
                    c=1;
                    e++;
                }
            }
        }

        printf("Minimum exchange operations : %d\n", e);
    }

    return 0;
}
