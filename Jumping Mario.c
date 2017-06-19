#include <stdio.h>

int main (void) {
    short int a, b;

    scanf("%hd", &a);
    for(b=1; b<=a; b++) {
        short int c;
        int e,f,g=0,h=0;

        scanf("%hd", &c);
        if(c)scanf("%d", &e);
        for( ; c>1 ; c--) {
            scanf("%d", &f);
            if(f>e) g++;
            else if(f<e) h++;
            e=f;
        }

        printf("Case %d: %d %d\n",b, g, h);
    }
    return 0;
}
