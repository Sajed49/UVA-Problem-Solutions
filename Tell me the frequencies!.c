#include <stdio.h>

int main (void) {
    char str[1001];
    int cou=0;

    while(gets(str)) {
        int ch1[130];
        int ch2[130];
        int a, b, c;

        for(a=0; a<130; a++) ch1[a]=0;

        for(a=0; str[a]; a++) ch1[str[a]]++;
        for(a=0; a<130; a++) ch2[a]=ch1[a];

        /* buuble sort */
        for(a=0; a<130; a++) {
            for(b=a+1; b<130; b++) {
                if(ch2[b]<ch2[a]) {
                    c=ch2[b];
                    ch2[b]=ch2[a];
                    ch2[a]=c;
                }
            }
        }
        if(cou) printf("\n");
        else cou++;

        for(a=0, c=-100; a<130; a++) {
            if(ch2[a] && ch2[a]!=c) {
                for(b=130; b>-1; b--) {
                    if(ch1[b]==ch2[a]) {
                        printf("%d %d\n", b, ch2[a]);
                        c=ch2[a];
                    }
                }
            }
        }

    }
    return 0;
}
