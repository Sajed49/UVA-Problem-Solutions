#include <stdio.h>

int main(void) {
    int a;

    while (scanf("%d", &a)==1 && a){
        int flag=1, i, j;
        for(i=1; i<60; i++) {
            for(j=0; j<i; j++) {
                if(a==(i*i*i)-(j*j*j)) {
                    flag=0;
                    break;
                }
            }
            if(flag==0) break;
        }
       (flag) ? printf("No solution\n") : printf("%d %d\n",i, j);

    }
    return 0;
}
