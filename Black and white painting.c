#include <stdio.h>

int main (void) {
    int a,b,c;
    while(scanf("%d %d %d", &a ,&b, &c)==3) {
        if(!a && !b && !c) break;

        a-=7;
        b-=7;
        a*=b;

        (c)? printf("%d\n", c+=((--a)>>1)): printf("%d\n", c+=(a>>1));
    }
    return 0;
}
