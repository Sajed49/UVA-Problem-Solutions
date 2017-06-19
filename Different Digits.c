#include <stdio.h>

int main (void) {
    int a,b,c,d,e, f,k;


    while(scanf("%d%d", &a, &b)==2) {

        for(d=0, c=a; c<=b; c++) {
            int num[10];

            for(k=0; k<10 ; k++) num[k]=0;
            for(e=c,f=1; e ; ) {

                if(++num[e%10] >1 ) {
                    f=0;
                    break;
                }
                e/=10;
            }
            if(f)d++;
        }
        printf("%d\n", d);
    }



    return 0;
}
