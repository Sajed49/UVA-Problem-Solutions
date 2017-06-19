#include <stdio.h>
int main (void) {
    int a,b,c,d,e=1,f;

    scanf("%d", &a);

    while(a) {
        scanf("%d %d %d", &b, &c , &d);
        if(b<c){
            f=b;
            b=c;
            c=f;
        }
        if(b<d) {
            f=b;
            b=d;
            d=f;
        }
        if(c<d){
            f=c;
            c=d;
            d=f;
        }
        printf("Case %d: %d\n",e,c);
        e++;
        a--;
    }

    return 0;
}
