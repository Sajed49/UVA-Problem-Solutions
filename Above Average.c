#include <stdio.h>

int main (void) {
    int a, b, c, d , e;
    long long int sum;
    int stu[1000];

    scanf("%d", &a);

    for( ;a ; a--) {
        scanf("%d", &b);
        for(c=0,sum=0,d=b ; d ; d--, c++) {
            scanf("%d", &stu[c]);
            sum = sum + stu[c];
        }

        sum = sum/b;

        for(c=0, d=b ,e=0; d ;d--, c++) {
            if(stu[c]>sum) e++;
        }

        printf("%.3f%%\n", (e*100.0)/b);

    }

    return 0;
}
