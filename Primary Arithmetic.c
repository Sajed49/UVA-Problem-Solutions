#include <stdio.h>

int main (void) {
    long long int a, b;
    while(scanf("%lld %lld", &a, &b)==2 ) {
        if(!a && !b) break;
        char c, d, e=0, count=0;
        for( ; a || b; a/=10, b/=10){
            c=a%10;
            d=b%10;

            if((c+d+e)> 9) {
                e=1;
                count++;
            }
            else e=0;
        }

        if(!count)printf("No carry operation.\n");
        else if(count==1) printf("1 carry operation.\n");
        else printf("%d carry operations.\n",count);
    }


    return 0;


}
