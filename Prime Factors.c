#include <stdio.h>
#include <math.h>

int prime_generator (long int x);
void repeat (long int x,long int y);

int main (void) {
    long int a;

    while(scanf("%ld", &a) && a) {
        long int b=2;
        long int pr;



        for( ; b<=a; b++) {
            pr=prime_generator(b);
            if(pr && !(a%b)) {
                printf(" x %ld", b);
                repeat(a/b, b);
            }
        }

        putchar('\n');
    }
    return 0;
}

void repeat (long int x, long int y){
    while(!(x%y) && x>1) {
        printf(" x %ld", y);
        x/=y;
    }

}


int prime_generator (long int x){
    long int a=2, flag=1;
    float b=sqrt(x);


    for( ; a<=b;a++) {
        if(!(x%a)) {
            flag=0;
            break;
        }
    }
    return flag;
}


