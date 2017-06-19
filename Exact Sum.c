#include <stdio.h>

int main (void) {
    int a;
    while(scanf("%d", &a)==1) {
        long long int b;
        int atto[10000];
        int d=0,e;
        int i,j,t1=0,t2=0,n=1000002,s;



        for( ;d<a ; d++) scanf("%d", &atto[d]);
        scanf("%lld", &b);


        for( d=0; d<a  ; d++) {
            for( e=1; e<a; e++ ) {
                if((atto[d]+atto[e])==b) {
                    i=atto[d];
                    j=atto[e];

                    if(i>j) {
                        s=i-j;
                        if(n>s){
                            n=s;
                            t1=j;
                            t2=i;
                        }
                    }
                    else {
                        s=j-i;
                        if(n>s){
                            n=s;
                            t1=i;
                            t2=j;
                        }
                    }
                }
            }
        }

        printf("Peter should buy books whose prices are %d and %d.\n\n", t1, t2);


    }

    return 0;
}
