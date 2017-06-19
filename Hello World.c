#include <stdio.h>
int main (void) {
    int a, b=1,c, d=1;

    while(scanf("%d", &a)==1 && a>-1) {
        for(b=1,c=0; b<a; b=b*2,c++);
        printf("Case %d: %d\n",d ,c);
        d++;
    }

return 0;
}
