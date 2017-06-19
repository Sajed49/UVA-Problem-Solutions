#include <stdio.h>
#include <string.h>

int main (void) {
    int a;

    while(scanf("%d",&a)==1 && a) {
        char str[101];
        int len,div;
        int  j, k;

        getchar();
        gets(str);

        len=strlen(str);
        div=len/a;

        for( k=0; k<len; k+=div) {
            for(j=k+div-1 ; j>=k; j--) {
                putchar(str[j]);
            }
        }
        putchar('\n');
    }
    return 0;
}
