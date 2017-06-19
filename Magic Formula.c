#include <stdio.h>

int main (void) {
    long long int a,b,c,d,e;

    while(scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &e)==5){
        long long int x=0,y=0;
        if(!a && !b && !c && !d && !e) break;

        for( ; x<=e ; x++) if( !(((x*x*a)+(x*b)+c)%d)) y++;
        printf("%d\n",y);
    }
    return 0;
}
