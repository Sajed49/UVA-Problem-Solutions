#include <stdio.h>
int main (void) {
    int x1, y1, x2, y2;
    while(scanf("%d %d %d %d", &x1, &y1, &x2, &y2)==4) {
        if(!x1 && !x2 && !y1 && !y2) break;

        if(x1==x2 && y1==y2) printf("0\n");
        else if(x1==x2 || y1==y2) printf("1\n");
        else {
            x1-=x2;
            if(x1<0) x1*=(-1);
            y1-=y2;
            if(y1<0) y1*=(-1);

            (x1==y1)? printf("1\n") : printf("2\n");
        }

    }
    return 0;
}
