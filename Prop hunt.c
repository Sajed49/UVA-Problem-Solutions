#include <stdio.h>

int main (void) {
    int p,h,o;
    while(scanf("%d %d %d", &p, &h, &o)==3) {
        (p+h)>o ? printf("Hunters win!\n"): printf("Props win!\n");
    }

    return 0;
}
