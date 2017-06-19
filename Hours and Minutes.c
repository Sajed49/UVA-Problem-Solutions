#include <stdio.h>

int main (void) {
    float a;
    while(scanf("%f", &a)==1) {
        int b;
        a/=6;
        b=a;
        (b==a) ? printf("Y\n") :  printf("N\n");
    }
    return 0;
}
