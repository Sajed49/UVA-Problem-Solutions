#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}

int main (void) {
    int a, b, e=1;

    while(scanf("%d %d", &a, &b)==2) {
        int atto[10001];
        int c,t;

        if (!a && !b) break;

        for(c=0; c<a; c++) scanf("%d", &atto[c]);
        qsort (atto, a, sizeof(int), compare);
        printf("CASE# %d:\n",e++);


        while(b--) {
            int i=1;
            scanf("%d", &t);

            for(c=0; c<a; c++) {
                if(atto[c]==t) {
                    printf("%d found at %d\n",t,c+1);
                    i=0;
                    break;
                }
            }
            if(i) printf("%d not found\n",t);

        }
    }
    return 0;
}
