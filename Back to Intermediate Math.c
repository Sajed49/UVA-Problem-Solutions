#include <stdio.h>
#include <math.h>

int main (void) {
    int a,b;
    scanf("%d", &a);

    for(b=1 ; b<=a ; b++) {
        int d,v,u;
        scanf("%d %d %d", &d , &v , &u);
        if(!u || !v || v>=u) printf("Case %d: can't determine\n", b);
        else printf("Case %d: %.3f\n", b, ((d*1.0)/sqrt(u*u - v*v)) - ((d*1.0)/u) );
    }

    return 0;
}
