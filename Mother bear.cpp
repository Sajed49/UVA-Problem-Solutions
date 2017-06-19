#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main (void) {
    char str[10001];

    while(1) {
        int a, b, c=1;

        gets(str);
        if(!strcmp(str, "DONE")) break;

        b=strlen(str);
        for(a=0; a<b; a++) str[a]=tolower(str[a]);

        for(a=0, b--; a<=b; ) {
            if(str[a]<97 || str[a]>122) a++;
            else if(str[b]<97 || str[b]>122) b--;
            else if(str[b]!=str[a]) {
                c=0;
                break;
            }
            else {
                a++;
                b--;
            }
        }
        (c)? printf("You won't be eaten!\n"): printf("Uh oh..\n");
    }
    return 0;
}
