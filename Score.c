#include <stdio.h>


int main (void) {
    int a;
    char str[81];

    scanf("%d", &a);
    gets(str);

    while(a--) {
        int s=0, t=0,b=0;
        char *p;

        gets(str);

        for(p=str; *p ;  p++) {
            if(*p == 'o' || *p =='O') {
                t++;
                s+=t;
            }
            else t=0;
        }

        printf("%d\n",s);
    }
    return 0;
}
