#include <stdio.h>
#include <string.h>

int main (void) {
    int a, b, c, d;
    char in[20][2][101];
    char out[101];
    scanf("%d", &a);

    getchar();
    for(b=0; b<a; b++) {
        gets(in[b][0]);
        gets(in[b][1]);
    }

    scanf("%d", &c);
    getchar();
    for(d=0; d<c; d++) {
        gets(out);
        for(b=0; b<a; b++) {
            if(!strcmp(in[b][0], out)) {
                puts(in[b][1]);
                break;
            }
        }
    }


    return 0;
}
