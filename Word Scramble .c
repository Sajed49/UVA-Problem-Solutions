#include <stdio.h>
#include <string.h>

int main (void) {
    char atto[1000];
    int a, b, c,d,e;

    while(gets(atto)) {
        b=strlen(atto);
        for(a=0,c=0; a<b; a++) {
            if(atto[a]==' ') {
                for(d=a-1; c<=d ;  d--) printf("%c", atto[d]);
                printf(" ");
                c=a+1;
            }
        }
        for(d=b-1; d>=c; d--)printf("%c", atto[d]);
        printf("\n");

    }

    return 0;
}
