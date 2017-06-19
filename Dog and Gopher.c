#include <stdio.h>
#include <math.h>

int main (void) {
    int a;

    while(scanf("%d", &a)==1){
        float g1, g2, d1, d2;
        float distgof, distdog;
        float fin1, fin2;
        int flag=0;

        scanf("%f %f %f %f", &g1, &g2, &d1, &d2);
        while(a--){
            float c1, c2;

            scanf("%f %f", &c1, &c2);
            distgof=2*sqrt((c1-g1)*(c1-g1)+(c2-g2)*(c2-g2));
            distdog=sqrt((c1-d1)*(c1-d1)+(c2-d2)*(c2-d2));

            if(distgof <= distdog && !flag) {
                flag=1;
                fin1=c1;
                fin2=c2;
            }
        }
        if(flag) printf("The gopher can escape through the hole at (%.3f,%.3f).\n", fin1, fin2);
        else printf("The gopher cannot escape.\n");


    }
    return 0;
}
