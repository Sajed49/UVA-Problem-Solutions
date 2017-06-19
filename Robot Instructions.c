#include <stdio.h>

int main (void) {
    char str[10];
    int save[100];
    int a, b, c, d, e;

    scanf("%d", &a);
    while(a--) {
        scanf("%d", &b);
        for(c=0,d=0; c<b; c++) {
            scanf("%s", str);
            if(str[0]=='R') {
                save[c]=1;
                d++;
            }
            else if (str[0]=='L') {
                save[c]=-1;
                d--;
            }
            else {
                scanf("%s%d", str , &e);
                save[c]= save[e-1];
                d+=save[c];
            }
        }
        printf("%d\n", d);
    }

    return 0;
}
