#include <stdio.h>

int main (void) {
    int a,b=1;

    scanf("%d", &a);

    while(a--) {
        double c;
        long long int k;

        scanf("%lf", &c);

        c =((c)*(c-1))/4;
        k=c;

        printf("Case %d: ",b++);
        (k==c)? printf("%.0lf\n",c): printf("%.0lf/2\n",c*2);
    }
    return 0;
}
