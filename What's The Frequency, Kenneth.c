#include <stdio.h>
#include <string.h>

int main (void) {
    char str[100001];

    while(gets(str)) {
        int atto[127];
        int a, b;
        int ch, high=-2;

        b=strlen(str);
        for(a=0; a<127; a++) atto[a]=0;
        for(a=0; a<b; a++) {
            ch=str[a];

            if(ch>64 && ch<91) atto[ch]++;
            if(ch>96 && ch<123) atto[ch]++;
        }

        for(a=64; a<127; a++) {
            if(high<atto[a]) high=atto[a];
        }
        for(a=64; a<124; a++) {
            if(high==atto[a]) putchar(a);
        }
        printf(" %d\n", high);
    }
    return 0;
}
