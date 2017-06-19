#include <stdio.h>

int main (void) {
    int a, b=1;
    while(scanf("%d", &a)==1 && a>-1) {
        int pro[12];
        int con[12];
        int sum, i;

        printf("Case %d:\n", b++);

        for(i=0; i<12 ; i++) scanf("%d", &pro[i]);
        for(i=0, sum=a; i<12 ; i++) {
            scanf("%d", &con[i]);
            if(con[i]>sum) {
                sum+=pro[i];
                printf("No problem. :(\n");
            }
            else {
                sum-=con[i];
                sum+=pro[i];
                printf("No problem! :D\n");
            }
        }
    }
    return 0;
}
