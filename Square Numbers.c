#include <stdio.h>
#include <math.h>

int main (void) {
    int a,b;

    while (scanf("%d %d", &a, &b)==2) {
        int count=0;
        if (!a && !b) break;

        for( ; a<=b ; a++) {
            float k=sqrt(a);
            int c=k;

            if(c==k) count++;
        }
    printf("%d\n", count);
    }
    return 0;
}
