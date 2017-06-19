#include <stdio.h>

int main (void) {
    long int a,b,c,d,e;
    int e1,count;

    for( scanf("%ld", &a) ; a; a--) {
        scanf("%ld", &b);
        e1=1;
        for( count=0 ; e1 ; count++) {
            for(d=0,c=b ;c; ) {
                d= (d*10)+(c%10);
                c/=10;
            }
            b+=d;

            for(c=b,e=0; c; ){
                e= (e*10)+(c%10);
                c/=10;
            }
            if(b==e) e1=0;
        }
        printf("%d %ld\n",count, b );
    }

    return 0;
}
