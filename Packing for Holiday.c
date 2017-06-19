#include <stdio.h>
int main (void) {

    int a,e=1,b,c,d;

    scanf("%d", &a);

    while(a) {
        scanf("%d %d %d", &b, &c, &d);
        if(b>20 || c>20 || d>20) printf("Case %d: bad\n", e);
        else printf("Case %d: good\n", e);
        e++;
        a--;
    }
}
