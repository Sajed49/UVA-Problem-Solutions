#include <stdio.h>

int main (void) {
    int a;
    scanf("%d", &a);
    while(a--) {
        long int b, c;
        scanf("%ld %ld", &b, &c);
        b-=2;
        c-=2;
        if(b%3) b=(b/3)+1;
        else b/=3;
        if(c%3) c=(c/3)+1;
        else c/=3;

        printf("%ld\n", b*c);
    }

    return 0;
}
