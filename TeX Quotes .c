#include <stdio.h>

int main(void){
    char ch;
    short int a=1;
    while(scanf("%c",&ch)==1){
        if(ch=='"'){
            if(a) {
                printf("``");
                a=0;
            }
            else {
                printf("''");
                a=1;
            }

        }
        else printf("%c",ch);
    }
    return 0;
}
