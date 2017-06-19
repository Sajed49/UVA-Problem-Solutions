#include <stdio.h>

int main (void) {
    int a;
    int high=11, low=0;
    char str[12];

    while(scanf("%d", &a)==1 && a) {

        getchar();
        gets(str);

        if(str[4]=='h' && a<high) high=a;
        else if(str[4]=='l' && a>low) low=a;
        else if(str[4]=='t') {
            if(a>low && a<high) printf("Stan may be honest\n");
            else printf("Stan is dishonest\n");

            high=11;
            low =0;
        }

    }
    return 0;
}
