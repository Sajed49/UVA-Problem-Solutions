#include <stdio.h>

int main (void) {
    int a;
    scanf("%d", &a);
    for( ; a ; a--) {
        int f1, f2, t1;
        scanf("%d %d %d", &f1, &f2, &t1);
        printf("%d\n",(((2*f1)-f2)*t1)/(f1+f2));
    }
    return 0;
}
