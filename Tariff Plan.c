#include <stdio.h>

int main (void) {
    short a,b=1;
    scanf("%hd", &a);

    for(; b<=a; b++) {
        short c,d;
        long m=0,j=0;

        scanf("%hd", &c);
        for( ;c ; c--) {
            scanf("%hd", &d);
            m+=(((d/30)+1)*10);
            j+=(((d/60)+1)*15);
        }
        if(m==j) printf("Case %hd: Mile Juice %ld\n",b ,m);
        else {
            (m<j) ? printf("Case %hd: Mile %ld\n", b , m) : printf("Case %hd: Juice %ld\n", b , j);
        }
    }
    return 0;
}
