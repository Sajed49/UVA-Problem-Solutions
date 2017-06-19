#include <stdio.h>

int main (void) {
    int a;
    scanf("%d", &a);

    while(a--) {
        int b;
        scanf("%d", &b);

        switch(b) {
        case 2:
            printf("1/2\n");
            break;
        case 3:
            printf("2/6\n");
            break;
        case 4:
            printf("9/24\n");
            break;
        case 5:
            printf("44/120\n");
            break;
        case 6:
            printf("265/720\n");
            break;
        case 7:
            printf("1854/5040\n");
            break;
        case 8:
            printf("14833/40320\n");
            break;
        case 9:
            printf("133496/362880\n");
            break;
        case 10:
            printf("1334961/3628800\n");
            break;
        case 11:
            printf("14684570/39916800\n");
            break;
        default:
            printf("176214841/479001600\n");
        }
    }
    return 0;
}
