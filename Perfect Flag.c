#include <stdio.h>

int main (void) {
    int test;

    scanf("%d", &test);

    while(test--) {
        int lowX,lowY, highX, highY, centerX, centerY, radius;
        int len , wid;

        scanf("%d %d %d %d %d %d %d", &lowX,&lowY, &highX, &highY, &centerX, &centerY, &radius);

        len=highX-lowX;
        wid=highY-lowY;

        ((len*3)==(wid*5) && len==radius*5  && (centerX-lowX)*20 == len*9  && (highY+lowY)==centerY*2) ? printf("YES\n") : printf("NO\n");

    }
    return 0;
}
