#include <stdio.h>

int main (void) {
    int a, b, c, d,e=1,f;

    scanf("%d", &a);
    while (a) {
        scanf("%d %d %d", &b, &c, &d);
        f=c+d;

        if(!(f%b)) printf("Case %d: %d\n",e, b);
        else if(f >b) printf("Case %d: %d\n",e, f%b);
        else printf("Case %d: %d\n",e, f);
        e++;
        a--;
    }

    return 0;
}
