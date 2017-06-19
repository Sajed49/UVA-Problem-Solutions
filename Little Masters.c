#include <stdio.h>
#include <math.h>

int main (void) {
    int a;
    scanf("%d", &a);
    while(a--) {
        float b, c;
        int d;

        scanf("%f %f %d", &b, &c, &d);
        b= sqrt((b*b)+(c*c));
        c=d-b;
        printf("%.2f %.2f\n",c, (2*d)-c);
    }
    return 0;
}
