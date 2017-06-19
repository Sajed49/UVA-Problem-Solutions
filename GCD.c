#include <stdio.h>
int gcd(int x, int y);


int main (void) {
    int a, b, c,sum;
    while(scanf("%d", &a)==1) {
        if(!a) break;
        for(sum=0,b=1 ; b<a ; b++) {
            for(c=b+1 ; c<=a; c++) {
                sum+=gcd(b,c);
            }
        }
        printf("%d\n", sum);
    }


    return 0;
}

int gcd (int x, int y) {
    int k;

    while(x != 0) {
        k= y%x;
        y= x;
        x= k;
    }


    return y;
}
