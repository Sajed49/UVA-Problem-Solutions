#include <stdio.h>

int main (void) {
    int a;
    while(scanf("%d", &a)==1) {
        int jol[a-1], atto[a];
        int b, c, d, e;

        for(b=0, c=a-1; b<c ; b++) jol[b]=b+1;
        for(b=0; b<a ; b++) scanf("%d", &atto[b]);
        for(b=0; b<c ; b++) {
            d = atto[b]- atto[b+1];
            if(d<0) d= d*(-1);
            for(e=0; e<c; e++) {
                if(jol[e]==d) {
                    jol[e] = -1;
                    break;
                }
            }
        }
        for(b=0, d=0; b<c ; b++) {
            if(jol[b]==-1) d++;
        }


        if(d==c) printf("Jolly\n");
        else printf("Not jolly\n");

    }

    return 0;
}
