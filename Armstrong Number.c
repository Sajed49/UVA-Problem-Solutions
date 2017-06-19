#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long int pow (char x, char y);

int main (void) {
    int a;
    char str[12];

    scanf("%d", &a);
    gets(str);

    while(a--) {
        long long int b,c,d=0;
        char f,l;

        gets(str);
        b=atoi(str);
        l=strlen(str);

        for(c=b ; c ; c/=10) {
            f=(c%10);
            d+=pow(f,l);
        }

        d==b ? printf("Armstrong\n") : printf("Not Armstrong\n");

    }
    return 0;
}

long long int pow (char x, char y) {
    long long int a=1;
    while (y--) a*=x;

    return a;
}


