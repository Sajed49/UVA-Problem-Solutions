#include <stdio.h>

int main (void) {
    int a;
    char str[201];
    scanf("%d", &a);

    gets(str);
    while(a--) {
        char *p;
        int sum[26];
        int high=0;
        int b=0;

        gets(str);

        for(b=0;b<26;b++) sum[b]=0;
        for(p=str ;*p ; p++) {
            if(*p >96 && *p<123) sum[*p-97]++;
            if(*p >64 && *p<91 ) sum[*p-65]++;
        }
        for(b=0 ;b<26; b++ ) {
            if(sum[b]>high) high=sum[b];
        }
        for(b=0; b<26; b++) {
            if(high==sum[b]) printf("%c", b+97);
        }
        printf("\n");

    }

    return 0;
}
