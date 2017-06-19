#include <stdio.h>

int main (void){
    int a, b, c, d;

    while(scanf("%d",&a)==1 && a) {
        for( c=0; a>2 ; ) {
            b=(a%3);
            a/=3;
            c+=a;
            a+=b;
        }
        if(a==2) c++;
        printf("%d\n", c);
    }


    return 0;
}
