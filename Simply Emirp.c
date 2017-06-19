#include <stdio.h>
#include <math.h>

int prime (long long int x);

int main (void) {
    long long int a;

    while(scanf("%lld", &a)==1) {
        if(prime(a) && a) {
            long long int b=0,c=a;
            for( ;c; c/=10 ) b=(b*10)+(c%10);
            if(b != a && prime(b)) printf("%lld is emirp.\n", a);
            else printf("%lld is prime.\n", a);
        }
        else printf("%lld is not prime.\n", a);
    }
    return 0;
}

int prime (long long int x) {
    int flag=1;
    long long int b=2;
    float c= sqrt(x);

    for( ; b<=c ;b++) {
        if(!(x%b)) {
            flag=0;
            break;
        }
     }

     return flag;
}
