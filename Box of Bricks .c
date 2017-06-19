#include <stdio.h>

int main (void) {
    int a,f=1;
    while (scanf("%d", &a)==1 && a) {
        int num[51];
        int b=0,c=0,d=0;

        for(; b<a; b++) {
            scanf("%d", &num[b]);
            c+=num[b];
        }
        c/=a;

        for(b=0; b<a; b++) {
            if(num[b]>c) d=d+(num[b]-c);
        }
        printf("Set #%d\n",f++);
        printf("The minimum number of moves is %d.\n\n", d);
    }
    return 0;
}
