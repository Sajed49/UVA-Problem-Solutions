#include <stdio.h>

int main (void) {
    char str[6];
    int a=1;
    while(gets(str)) {
        char ch;
        ch=str[0];
        if(ch=='*') break;
        else if(ch=='H') printf("Case %d: Hajj-e-Akbar\n", a++);
        else printf("Case %d: Hajj-e-Asghar\n", a++);
    }
    return 0;
}
