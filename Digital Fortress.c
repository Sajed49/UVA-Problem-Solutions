#include <stdio.h>
#include <math.h>
#include <string.h>

int main (void) {
    int a;

    scanf("%d", &a);
    getchar();
    while(a--) {
        char str[10001];
        int len,p;
        double le;

        gets(str);
        len=strlen(str);

        le=sqrt(len);
        p=le;
        if(p==le) {
            int e, f;
            for( e=0; e<p ; e++) {
                for(f=e ; f<len; f+=p) {
                    putchar(str[f]);
                }
            }
            putchar('\n');        }
        else printf("INVALID\n");

    }
    return 0;
}
