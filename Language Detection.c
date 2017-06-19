#include <stdio.h>
#include <string.h>

int main (void) {
    int count=1;
    char str[15],ch;
    while(gets(str) && str[0]!='#') {
        if(!strcmp(str,"HELLO")) printf("Case %d: ENGLISH\n", count++);
        else if(!strcmp(str,"HOLA")) printf("Case %d: SPANISH\n", count++);
        else if(!strcmp(str,"HALLO")) printf("Case %d: GERMAN\n", count++);
        else if(!strcmp(str,"BONJOUR")) printf("Case %d: FRENCH\n", count++);
        else if(!strcmp(str,"CIAO")) printf("Case %d: ITALIAN\n", count++);
        else if(!strcmp(str,"ZDRAVSTVUJTE")) printf("Case %d: RUSSIAN\n", count++);
        else printf("Case %d: UNKNOWN\n", count++);
    }

    return 0;
}
