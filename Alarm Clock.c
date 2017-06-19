#include <stdio.h>
int  main (void) {
    int a, b, c, d;
    while(scanf("%d %d %d %d", &a, &b, &c , &d)==4) {
        if(!a && !b && !c && !d) break;
        a=(a*60)+b;
        c=(c*60)+d;

        a>c ? printf("%d\n",1440+c-a ) : printf("%d\n",c-a );

    }
    return 0;
}
