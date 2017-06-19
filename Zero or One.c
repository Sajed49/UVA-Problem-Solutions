#include <stdio.h>


int main (void) {
    unsigned a, b, c;
    while(scanf("%u %u %u", &a, &b , &c)==3) {
        if((a && !b && !c) || (!a && b && c)) printf("A\n");
        else if ((!a && b && !c) || (a && !b && c)) printf("B\n");
        else if ((!a && !b && c) || (a && b && !c)) printf("C\n");
        else printf("*\n");
    }

    return 0;
}
