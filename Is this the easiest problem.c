#include <stdio.h>

int main (void) {
    short int a, b;

    scanf("%d", &a);
    for(b=1; b<=a; b++) {
        long int e,f,g,h;
        scanf("%ld %ld %ld", &e, &f, &g);

        if(e>f) {
            h=e;
            e=f;
            f=h;
        }
        if (e>g) {
            h=e;
            e=g;
            g=h;
        }
        if (f>g) {
            h=f;
            f=g;
            g=h;
        }
        if((e+f) <= g || e<1 || f<1 || g<1) printf("Case %d: Invalid\n",b);
        else if(e==f && f==g) printf("Case %d: Equilateral\n", b);
        else if (e==f || f==g) printf("Case %d: Isosceles\n",b);
        else printf("Case %d: Scalene\n",b);
    }

    return 0;
}
