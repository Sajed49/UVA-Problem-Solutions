#include <stdio.h>

int main (void) {
    int in[5];
    while(scanf("%d %d %d %d %d",&in[0], &in[1], &in[2], &in[3], &in[4])==5) {
        int out[5], a, b=1;

        for(a=0; a<5; a++) {
            scanf("%d", &out[a]);
            if(in[a]==out[a]) {
                b=0;
            }
        }

        if(b) putchar('Y');
        else putchar('N');
        putchar('\n');

    }
    return 0;
}
