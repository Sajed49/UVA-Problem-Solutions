#include <stdio.h>
#include <string.h>

int main (void) {
    char str[21];
    while(gets(str)) {
        int a, b, c=0,  e,f,g;
        b=strlen(str);
        for(a=0 ; a<b; a++) {
            if(str[a]>64 && str[a]<91) c+=(str[a]-38);
            else if(str[a]>96 && str[a]<123) c+=(str[a]-96);
        }

        e=c/2;
        for(a=2,b=1; a<=e; a++) {
            if(!(c%a)) {
                b=0;
                break;
            }
        }
        if(!c) b=0;

        if(b) printf("It is a prime word.\n");
        else printf("It is not a prime word.\n");
    }

    return 0;
}
