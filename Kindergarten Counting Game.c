#include <stdio.h>
#include <string.h>

int main (void) {
    char str1[10000];
    int a,b,c,d,e;

    while(gets(str1)) {
        a=strlen(str1);
        if(!a) break;

        for(b=0,e=0; a ;b++,a--) {
            c=0;
            if((str1[b] > 64 && str1[b]< 91) || (str1[b]>96 && str1[b]<123)) c++;
            else c=0;

            if(d>0 && !c) e++;

            d=c;
        }

        printf("%d\n", e);
    }

    return 0;
}
