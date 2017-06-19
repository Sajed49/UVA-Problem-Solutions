#include <stdio.h>

int main (void) {
    int a,b;

    while(scanf("%d",&a)==1) {
        if(!a) break;
        for(b=0; a; a--) {
            b = b+(a*a);
        }
        printf("%d\n",b);
    }

    return 0;
}
