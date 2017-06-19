#include <stdio.h>

int main (void) {
    float h, m;


    while(scanf("%f:%f", &h,&m)==2) {


        if(!h && !m) break;
        h = (h*30) + ((m/10)*5) - (m*6);


        if(h<0) h= h*(-1);

        if(h>180) h= 360-h;
        printf("%.3f\n", h);
    }


    return 0;
}
