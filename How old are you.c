#include <stdio.h>

int main (void) {
    int d1,d2, m1,m2 , y1,y2, i, j, f;

    scanf("%d", &i);
    for(j=1 ; j<=i; j++) {
        scanf("%d/%d/%d", &d1 ,&m1, &y1);
        scanf("%d/%d/%d", &d2 ,&m2, &y2);

        f=y1-y2;

        if(m1- m2 <0) f--;
        else if(m1==m2 && d1<d2) f--;




        if(f<0) printf("Case #%d: Invalid birth date\n", j);
        else if(f >130 ) printf("Case #%d: Check birth date\n", j);
        else printf("Case #%d: %d\n", j,f );
    }

    return 0;
}
