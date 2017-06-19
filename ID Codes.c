#include <stdio.h>
#include <string.h>

int main (void) {
    char atto[1000];
    int a=0,b;

    while(gets(atto)) {
        a=0;
        b= strlen(atto);
        while(a<b) {
            printf("%c", atto[a]-7);
            a++;
        }
        printf("\n");
    }

    return 0;
}
