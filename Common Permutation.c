#include <stdio.h>

int main (void) {
    char s1[1001], s2[1001];

    while(gets(s1)) {
        int atto[26][3];
        int a,b;

        gets(s2);
        for(a=0; a<26; a++) {
            atto[a][0]=0;
            atto[a][1]=0;
            atto[a][2]=0;
        }

        for(a=0; s1[a] ; a++) atto[s1[a]-97][0]++;
        for(a=0; s2[a] ; a++) atto[s2[a]-97][1]++;

        for(a=0; a<26 ; a++) {
            if(atto[a][0] > atto[a][1]) atto[a][2]=atto[a][1];
            else atto[a][2]=atto[a][0];
        }

        for(a=0; a<26; a++){
            if(atto[a][2]) {
                for(b=0; b<atto[a][2]; b++) putchar(a+97);
            }
        }
        putchar('\n');
    }
    return 0;
}
