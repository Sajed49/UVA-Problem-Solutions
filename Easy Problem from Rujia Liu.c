#include <stdio.h>

int main (void) {
    int a, b;

    while(scanf("%d %d", &a, &b)==2) {
        int atto[100000];
        int c;
        int i,j,k,count;

        for(c=0; c<a; c++) scanf("%d", &atto[c]);

        for(k=0; k<b; k++) {
            count=0;
            scanf("%d %d", &i, &j);

            for(c=0; c<a; c++) {
                if(atto[c]==j) {
                    count++;
                    if(count==i) break;
                }
            }

            if(count==i) printf("%d\n", ++c);
            else printf("0\n");
        }
    }
    return 0;
}
