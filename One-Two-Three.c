#include <stdio.h>
#include <string.h>

int main (void) {
    int a;
    scanf("%d", &a);
    while(a--){
        char str[7];
        char ch1, ch2, ch3;
        short int t;
        char *p;

        scanf("%s", str);
        t=strlen(str);


        if(t==5) printf("3\n");
        else {
            p=str;
            ch1= *p++;
            ch2= *p++;
            ch3= *p++;
            if(ch1=='o') t++;
            if(ch2=='n') t++;
            if(ch3=='e') t++;
            if(t>4) printf("1\n");
            else printf("2\n");
        }

    }
    return 0;
}
