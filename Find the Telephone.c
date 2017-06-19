#include <stdio.h>

int main (void) {
    char str[31];
    while(gets(str)) {
        char *p;

        for(p=str ; *p ; p++ ) {
            switch (*p) {
                case 'A':
                    *p=50;
                    break;
                case 'B':
                    *p=50;
                    break;
                case 'C':
                    *p=50;
                    break;
                case 'D':
                    *p=51;
                    break;
                case 'E':
                    *p=51;
                    break;
                case 'F':
                    *p=51;
                    break;
                case 'G':
                    *p=52;
                    break;
                case 'H':
                    *p=52;
                    break;
                case 'I':
                    *p=52;
                    break;
                case 'J':
                    *p=53;
                    break;
                case 'K':
                    *p=53;
                    break;
                case 'L':
                    *p=53;
                    break;
                case 'M':
                    *p=54;
                    break;
                case 'N':
                    *p=54;
                    break;
                case 'O':
                    *p=54;
                    break;
                case 'P':
                    *p=55;
                    break;
                case 'Q':
                    *p=55;
                    break;
                case 'R':
                    *p=55;
                    break;
                case 'S':
                    *p=55;
                    break;
                case 'T':
                    *p=56;
                    break;
                case 'U':
                    *p=56;
                    break;
                case 'V':
                    *p=56;
                    break;
                case 'W':
                    *p=57;
                    break;
                case 'X':
                    *p=57;
                    break;
                case 'Y':
                    *p=57;
                    break;
                case 'Z':
                    *p=57;
            }
        }

        puts(str);
    }
    return 0;
}
