#include <stdio.h>

int main (void) {
    long long int b1,b2,b3,g1,g2,g3,c1,c2,c3,t1,t2,t3,t4,t5,t6, fin, st;
    char str1 [6][4]={
    "BCG" , "BGC" ,
    "CBG" , "CGB",
    "GBC" , "GCB"
     };

    while(scanf("%lld %lld %lld %lld %lld %lld %lld %lld %lld",&b1 ,&g1 ,&c1 ,&b2 ,&g2 ,&c2 ,&b3 ,&g3 ,&c3 ) == 9) {
        fin= 4347483650;

        t1= b2+b3+c1+c3+g1+g2;
        if(fin>t1) {
            fin=t1;
            st=0;
        }

        t2= b2+b3+g1+g3+c1+c2;
        if(fin>t2) {
            fin=t2;
            st=1;
        }

        t3= c2+c3+b1+b3+g1+g2;
        if(fin>t3) {
            fin=t3;
            st=2;
        }

        t4= c2+c3+g1+g3+b1+b2;
        if(fin>t4) {
            fin=t4;
            st=3;
        }

        t5= g2+g3+b1+b3+c1+c2;
        if(fin>t5) {
            fin=t5;
            st=4;
        }

        t6= g2+g3+c1+c3+b1+b2;
        if(fin>t6) {
            fin=t6;
            st=5;
        }

        printf("%s %d\n",str1[st], fin);

    }

    return 0;
}
