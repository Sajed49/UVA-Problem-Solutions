#include <stdio.h>

int main (void) {
    int a;
    scanf("%d",&a);
    while(a--) {
        int b,c,d;
        register int e=0,f=0,g=0;
        scanf("%d %d %d", &b, &c, &d);
        if(b+c>d) e=1;
        if(b+d>c) f=1;
        if(b+c>d) g=1;

        (e && f && g) ? printf("OK\n") : printf("Wrong!!\n");
    }
    return 0;
}
