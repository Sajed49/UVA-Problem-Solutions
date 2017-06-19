#include <stdio.h>

int main (void) {
    int count=1,a,b;
    int t1, t2, sf,at, c1,c2 ,c3;

    scanf("%d", &a);
    for( ; count<=a ; ) {
        scanf("%d %d %d %d %d %d %d",&t1, &t2, &sf ,&at, &c1, &c2 ,&c3);
        if(c3>c2) {
            b=c3;
            c3=c2;
            c2=b;
        }
        if(c3>c1) {
            b=c3;
            c3=c1;
            c1=b;
        }
        if(c2>c1) {
            b=c2;
            c2=c1;
            c1=b;
        }
        t1+=(t2+sf+at+((c1+c2)/2));

        if(t1>89) printf("Case %d: A\n", count++);
        else if(t1>79) printf("Case %d: B\n", count++);
        else if(t1>69) printf("Case %d: C\n", count++);
        else if(t1>59) printf("Case %d: D\n", count++);
        else  printf("Case %d: F\n", count++);
    }

    return 0;
}
