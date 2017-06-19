#include <stdio.h>

int main (void) {
    char a;
    scanf("%d", &a);
    printf("Lumberjacks:\n");
    while(a--){
        int len[10];
        char b;
        char a1=1, a2=1;

        for(b=0; b<10; b++) scanf("%d", &len[b]);
        for(b=0; b<9; b++) {
            if(len[b] <= len[b+1]) {
                a1=0;
                break;
            }
        }
        for(b=0; b<9; b++) {
            if(len[b] >= len[b+1]) {
                a2=0;
                break;
            }
        }

        (a1 || a2) ? printf("Ordered\n"): printf("Unordered\n");
    }




    return 0;
}
