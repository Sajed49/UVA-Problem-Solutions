#include <stdio.h>
#include <math.h>

void dis_ac (void);
void dis_tm (void);
void vel_tm (void);
void uvl_tm (void);
int count=1;

int main (void) {
    int a;
    while(scanf("%d",&a)==1 && a) {
        switch (a) {
            case 1:
                dis_ac();
                break;
            case 2:
                dis_tm();
                break;
            case 3:
                vel_tm();
                break;
            case 4:
                uvl_tm();
                break;
        }
    }
    return 0;
}


void dis_ac (void){
    double u, v, t, a;
    scanf("%lf %lf %lf", &u , &v , &t);
    a=(v-u)/t;
    printf("Case %d: %.3lf %.3lf\n", count++, ((v*v)-(u*u))/(2*a) , a);
}

void dis_tm (void) {
    double u, v, t, a;
    scanf("%lf %lf %lf", &u , &v , &a);
    t=(v-u)/a;
    printf("Case %d: %.3lf %.3lf\n", count++, ((v*v)-(u*u))/(2*a) , t);
}

void vel_tm  (void) {
    double u, v, a, s;
    scanf("%lf %lf %lf", &u , &a , &s);
    v= sqrt((u*u)+(2*a*s));
    printf("Case %d: %.3lf %.3lf\n", count++, v, (v-u)/a);
}
void uvl_tm (void) {
    double u, v, a, s;
    scanf("%lf %lf %lf", &v , &a , &s);
    u= sqrt((v*v)-(2*a*s));
    printf("Case %d: %.3lf %.3lf\n", count++, u, (v-u)/a);
}
