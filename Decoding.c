#include <stdio.h>
#include <string.h>

int main (void) {
    char str[1001];
    int a,b=1;

    scanf("%d", &a);
    gets(str);
    while(a--) {
        register char ch;
        int c,d=0;

        gets(str);
        c=strlen(str);
        printf("Case %d: ", b++);

        for( d=0 ; d<c; ) {
            register int sum=0;
            ch=str[d];
            d++;


            for( ; str[d]>47 && str[d]<58 ;d++) {
                sum=(sum*10)+ (str[d]-48);
            }
            for( ; sum ; sum--) printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
