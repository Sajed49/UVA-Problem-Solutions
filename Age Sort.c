#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b) {
    return ( *(char*)a - *(char*)b );
}

int main (void) {
    long int test;

    while(scanf("%ld", &test)==1 && test) {
        int a=0;
        char str[2000000];

        for(a=0; a<test; ) scanf("%d", &str[a++]);
        qsort (str, test , sizeof(char), compare);
        printf("%d",str[0]);
        for(a=1; a<test; ) printf(" %d", str[a++]);
        printf("\n");
    }
    return 0;
}
