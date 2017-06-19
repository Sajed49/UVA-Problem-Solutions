#include <stdio.h>

int main (void) {
    int a;
    scanf("%d", &a);

    while(a--) {
        int b, c;
        int stu[100001];
        int high=-150001, low= -200000;

        scanf("%d", &b);
        for(c=0; c<b; c++) scanf("%d", &stu[c]);

        for(c=0 ; c<b-1; c++) {
            if(stu[c]>high) {
                high=stu[c];
            }
            if(high-stu[c+1]>low) low=(high-stu[c+1]);
        }

        printf("%d\n", low);
    }
    return 0;
}
