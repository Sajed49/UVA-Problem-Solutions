#include <math.h>
#include <stdio.h>

int PrimeCheck (int x);
int prime[10001];

int main (void) {
    int lowRange, highRange;
    int j=0;

    for(j=0; j<10001; j++) {
        if(PrimeCheck((j*j)+j+41)) prime[j]=1;
        else prime[j]=0;
    }

    while(scanf("%d %d", &lowRange, &highRange)==2) {
        int count=0, diff=-1;
        int i=0;

        diff=(highRange-lowRange+1);

        for( ;highRange>=lowRange ; highRange--) {
            if(prime[highRange]) count++;
        }

        printf("%.2f\n", (((float)count*100.0)/(float)diff)+1e-9);

    }
    return 0;
}

int PrimeCheck (int x) {
    int a, c;
    int flag=1;

    c=sqrt(x);
    for(a=2; a<=c; a++) {
        if(!(x%a)) {
            flag=0;
            break;
        }
    }
    return flag;
}
