#include <stdio.h>
#include <math.h>

int main (void) {
    int cou=1;

    int digit;
    while(scanf("%d", &digit)==1 && digit) {
        double u, v, a, s, t;

        printf("Case %d: ", cou++);
        switch(digit) {
            case 1:
                scanf("%lf %lf %lf", &u, &v, &t);
                a=(v-u)/t;
                printf("%.3lf %.3lf\n",((v+u)*t)/2.0, a );
                break;
            case 2:
                scanf("%lf %lf %lf", &u, &v, &a);
                t=(v-u)/a;
                printf("%.3lf %.3lf\n",((v+u)*t)/2.0, t );
                break;
            case 3:
                scanf("%lf %lf %lf", &u, &a, &s);
                v= sqrt((u*u)+(2*a*s));
                printf("%.3lf %.3lf\n",v, (v-u)/a );
                break;
            default:
                scanf("%lf %lf %lf", &v, &a, &s);
                u=sqrt((v*v)-(2*a*s));
                printf("%.3lf %.3lf\n",u, (v-u)/a );
        }
    }

    return 0;
}
