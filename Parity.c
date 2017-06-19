#include <stdio.h>

void bin (int a);

int main (void) {
    int a;
    while(scanf("%d", &a)==1 && a) {
        unsigned int b=2147483648;
        char p=0;
        for( ; b>0 ; b>>=1) {
            if(a&b) p++;
        }


        printf("The parity of ");
        bin(a);
        printf(" is %d (mod 2).\n",p);
    }

    return 0;

}


void bin (int x) {

    if(x>1)bin(x/2);
    printf("%d", x%2);
}
