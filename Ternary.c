#include <stdio.h>

void ternary (long long int x);

int main (void) {
    long long int a;
    while(scanf("%lld", &a)==1 && a>-1){
        ternary(a);
        printf("\n");
    }
    return 0;
}

void ternary (long long int x) {

    if(x>2) ternary(x/3);
    printf("%lld", x%3);

}
