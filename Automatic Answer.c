#include <stdio.h>

int main (void) {
    int a,b,d;
    long int c;

    for( scanf("%d", &a); a; a--){
        scanf("%d", &b);
        c = ((b*63)+7492)*5 -498;
        if(c>-1) printf("%ld\n", (c/10)%10);
        else printf("%ld\n", ((c*-1)/10)%10);
    }

    return 0;
}
