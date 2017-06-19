#include <stdio.h>

int main (void) {
    int case1, len, temp, temp2,ex, result;
    int str[50];

    scanf("%d", &case1);
    for(; case1 ; case1--) {
        scanf("%d", &len );

        for(temp=0 ; temp<len ; temp++ ) {
            scanf("%d", &str[temp]);
        }

        for(temp=1, result=0; temp<= len ; temp++) {
            while( str[temp-1] != temp ) {
                for(temp2= 0 ; temp2<len; temp2++) {
                    if(str[temp2]== temp) {
                        ex = str[temp2 -1];
                        str[temp2 -1] = str[temp2];
                        str[temp2] = ex;
                        result++;
                        break;
                    }
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", result);


    }

    return 0;
}
