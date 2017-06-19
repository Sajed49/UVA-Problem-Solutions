#include <stdio.h>

int main (void) {
    int a, k=1;

    scanf("%d", &a);
    while(a-- ) {
        double b;
        long long int c,sum;

        scanf("%lf", &b);
        if(b>1180000) {
            sum=150000;
            b-=1180000;
            b/=4;
            c=b;
            if(c==b) sum+=c;
            else sum+=(c+1);
        }
        else if(b>880000) {
            sum=90000;
            b-=880000;
            b/=5;
            c=b;
            if(c==b) sum+=c;
            else sum+=(c+1);
        }
        else if(b>480000) {
            sum=30000;
            b-=480000;
            b*=0.15;
            c=b;
            if(c==b) sum+=c;
            else sum+=(c+1);
        }
        else if(b>180000) {
            sum=0;
            b-=180000;
            b/=10;
            c=b;
            if(c==b) sum+=c;
            else sum+=(c+1);

            if(sum<2000) sum=2000;
        }
        else sum=0;

        printf("Case %d: %lld\n",k++, sum);
    }
    return 0;
}
