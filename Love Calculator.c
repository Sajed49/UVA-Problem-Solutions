#include <stdio.h>
#include <string.h>

int main (void) {
    char nm1[26], nm2[26];
    int a, b, c, d, e,f,g;

    while(gets(nm1)) {
        gets(nm2);
        a= strlen(nm1);
        b= strlen(nm2);


        for(c=0,e=0; c<a; c++) {
            if(nm1[c] > 64 && nm1[c]< 91) e= e+(nm1[c]-64);
            else if(nm1[c] > 96 && nm1[c]< 123) e=e+(nm1[c]-96);
        }


        while(e>9) {
            d=0;
            while(e>0){
                d+=(e%10);
                e/=10;
            }
            e=d;
        }

        for(c=0,f=0; c<b; c++) {
            if(nm2[c] > 64 && nm2[c]< 91) f= f+(nm2[c]-64);
            else if(nm2[c] > 96 && nm2[c]< 123) f=f+(nm2[c]-96);
        }

        while(f>9) {
            d=0;
            while(f>0){
                d+=(f%10);
                f/=10;
            }
            f=d;
        }

        if(e==f) printf("100.00 %%\n");
        else if(e>f) printf("%.2f %%\n", (float)f/(float)e*100.0);
        else printf("%.2f %%\n", (float)e/(float)f*100.0);

    }

    return 0;
}
