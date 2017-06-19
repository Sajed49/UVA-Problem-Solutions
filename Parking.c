#include <stdio.h>

int main (void) {
    int a, b;
    scanf("%d", &a);
    while(a--) {
        int min=65000, max=-65000,c ;
        scanf("%d",&b);
        for( ; b; b--) {
            scanf("%d", &c);
            if(c>max) max=c;
            if(c<min) min=c;
        }
        printf("%d\n", (max-min)*2);
    }
    return 0;
}
