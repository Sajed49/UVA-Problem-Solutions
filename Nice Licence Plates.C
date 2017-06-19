#include <stdio.h>

int main (void) {
    char str[9];
    int a;

    scanf("%d", &a);
    gets(str);

    while(a--) {
        int i=0,j=4,k=0;
        gets(str);

        i= ((str[0]-65)*26*26)+((str[1]-65)*26)+(str[2]-65);

        for( ; j<8; j++) {
            k=(k*10)+(str[j]-48);
        }


        ((i-k)>100 ||(i-k)<-100 )? printf("not nice\n") : printf("nice\n");
    }
    return 0;
}
