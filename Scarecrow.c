#include <stdio.h>
#include <string.h>

int main (void) {

    int total, length;
    register int i=1;
    scanf("%d", &total);

    for( ; i<=total; i++) {

        char data[100];
        register int counter=0, j=0;

        scanf("%d", &length);
        scanf("%s", &data);

        for( ; j<length; j++) {
            if(data[j] == '.') {
                counter++;
                j+=2;
            }
        }

        printf("Case %d: %d\n", i, counter);
    }

    return 0;
}
