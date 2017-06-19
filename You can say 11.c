#include <stdio.h>
#include <string.h>

int main (void) {

    while(1) {
        char atto[1000];
        short int b,c;
        int d=0;

        scanf("%s", atto);

        b=strlen(atto);
        if(b==1 && atto[0]=='0') break;


        for(c=0  ;  c<b ; c++)   d=((d*10)+atto[c]-'0')%11;

        if(d==0) printf("%s is a multiple of 11.\n", atto);
        else printf("%s is not a multiple of 11.\n", atto);
    }

    return 0;
}
