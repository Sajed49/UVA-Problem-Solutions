#include <stdio.h>

int main (void) {
    long long int a;

    while(scanf("%lld", &a)==1 && a>0 ) {

        if(a>1) printf("%lld%%\n", a*25 );
        else printf("0%%\n");
    }

    return 0;
}
