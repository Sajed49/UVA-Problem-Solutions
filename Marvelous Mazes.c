#include <stdio.h>
#include <string.h>

int main (void) {
    char str[200];

    while(gets(str)) {
        int i;
        int len, count=0;

        len=strlen(str);

        for(i=0; i<len; i++){
            if(str[i]>= '0' && str[i]<='9') count+=(str[i]-48);
            else {

                if(str[i]=='!') putchar('\n');
                else {
                    if(str[i]=='b') str[i]=32;
                    for( ;count-- ; ) putchar(str[i]);
                }
                count=0;
            }
        }
        putchar('\n');

    }
    return 0;
}
