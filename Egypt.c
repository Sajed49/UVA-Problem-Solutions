#include <stdio.h>

int main (void) {
    int a, b, c,d;
    float e,f,g;

    while(scanf("%d %d %d", &a, &b, &c)==3){
        if(!a && !b && !c) break;

        e = a*a;
        f = b*b;
        g = c*c;

        if(e+f==g) printf("right\n");
        else if(e+g==f) printf("right\n");
        else if(g+f==e) printf("right\n");
        else printf("wrong\n");
    }

return 0;
}
