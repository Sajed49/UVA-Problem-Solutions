#include <stdio.h>

int main (void) {
    int a;
    while(scanf("%d", &a)==1 && a) {
        char data[13][26];
        int b,c,count=0,flag, low=9999999;

        getchar();
        /* input */
        for(b=0; b<a; b++) gets(data[b]);

        for(b=0; b<a; b++) {
            for(c=0, flag=0; c<25; c++) {
                if(data[b][c]==' ') {
                    flag++;
                    count++;
                }
            }
            if(flag<low) low=flag;
        }
        count-=(low*a);

        printf("%d\n", count);
    }
    return 0;
}
