#include <stdio.h>

int main (void) {
    int a;

    printf("PERFECTION OUTPUT\n");
    while(scanf("%d", &a)==1 && a) {
        int b;
        int sum=0;

        printf("%5d  ",a);

        for(b=1; b<=(a/2); b++) {
            if(!(a%b)) sum+=b;
        }

        if(sum==a) printf("PERFECT\n");
        else if(sum>a) printf("ABUNDANT\n");
        else printf("DEFICIENT\n");
    }
    printf("END OF OUTPUT\n");
    return 0;
}
