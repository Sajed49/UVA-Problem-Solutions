#include <stdio.h>

int main (void) {
    long int a;

    while(scanf("%ld", &a)==1 && a!=-1){
        double sum,b=0,c=1,total=0;
        for( ;a; a-- ) {
            sum=(b+c);
            total+=c;
            b=c;
            c=sum;
        }
        printf("%.0lf %.0lf\n", total, total+c);
    }
    return 0;
}
