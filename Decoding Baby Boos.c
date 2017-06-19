#include <stdio.h>

int main (void) {
    int a;
    scanf("%d", &a);


    while(a--) {
        int d;
        char e,f,g;
        char str[1000001];
        char *p;
        char t1[2],t2[2];
        char pit[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

        gets(str);
        gets(str);
        scanf("%d", &d);
        while(d--){
            scanf("%s %s", t1, t2);
            for(g=0; g<26; g++) {
                if(t2[0]==pit[g])pit[g]=t1[0];
            }
        }
        for(p=str; *p; p++) {
            if(*p=='_') putchar('_');
            else putchar(pit[*p-65]);
        }
        puts("");

    }
    return 0;
}
