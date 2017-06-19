#include <stdio.h>

int main (void) {
    int d;
    scanf("%d", &d);
    while(d--) {
        int a,b,c, sum,fl=1;
        scanf("%d",&a);
        for(b=a-46; b<=a; b++) {
            for(c=b, sum=0; c; c/=10) sum+=(c%10);
            if(sum+b==a) {
                fl=0;
                break;
            }

        }
        if(fl) b=0;
        printf("%d\n", b);
    }
    return 0;
}
