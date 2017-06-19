#include <stdio.h>
#include <string.h>

int main (void) {
    char str[100];
    while(gets(str)){
        int a,e,f1=0;
        char c,*p;
        p=str;
        e=strlen(str);
        for(a=0; a<e ; a++) {
            c=*p++;
            if((c=='B' || c=='F' || c=='P' || c=='V' )  && f1 !=1 ) {
                printf("1");
                f1=1;

            }
            else if((c=='C' || c=='G' || c=='J' || c=='K' || c=='Q' || c=='S' ||c=='X' || c=='Z') && f1 !=2) {
                printf("2");
                f1=2;
            }
            else if((c=='D' || c=='T') && f1 !=3) {
                printf("3");
                f1=3;
            }
            else if(c=='L' && f1 !=4) {
                printf("4");
                f1=4;            }
            else if((c=='M' || c=='N')&& f1 !=5) {
                printf("5");;
                f1=5;
            }
            else if(c=='R' && f1 !=6 ) {
                printf("6");
                f1=6;
            }
            else if((c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='H' || c=='W' || c=='Y')){
                f1=7;
            }28
        }

        printf("\n");
    }
    return 0;
}
