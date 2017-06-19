#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int a;

    scanf("%d", &a);

    while(a--) {
        int rel[499];
        int b, c, d, e, f;

        scanf("%d", &b);
        for(c=0; c<b; c++) scanf("%d", &rel[c]);

        for(c=0; c<b; c++) {
            for(d=c+1; d<b; d++) {
                if(rel[c]>rel[d]) {
                    e= rel[c];
                    rel[c]= rel[d];
                    rel[d]= e;
                }
            }
        }

        for(c=0; c<b; c++) {
            for(d=0,f=0; d<b; d++) {
                f+= abs(rel[d]-rel[c]);
            }
            if(c==0) e=f;
            else if(e>f) e=f;
        }

        printf("%d\n",e);

    }

    return 0;
}
