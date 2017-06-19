#include <stdio.h>

int main (void) {
    int a, b=1;
    scanf("%d", &a);

    while(a--) {
        long long int sum=0,i=1,j=1;
        int c;

        printf("Scenario #%d:\n", b++);
        scanf("%d",&c);

        while(c--) {
            sum=i+j;
            i=j;
            j=sum;
        }
        printf("%lld\n\n",sum);
    }
    return 0;
}
