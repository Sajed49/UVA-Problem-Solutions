#include <stdio.h>

int main (void) {
    int test;
    scanf("%d", &test);

    while(test--) {
        int cost[256];
        int cha;
        int ch;
        int line;
        char str[10001];
        double sum=0;

        for(cha=0; cha<256; cha++) cost[cha]=0;
        scanf("%d", &cha);
        while(cha--) {
            ch=getchar();
            ch=getchar();
            scanf("%d",&cost[ch]);

        }

        scanf("%d", &line);
        gets(str);
        while(line--) {
            char *p;
            gets(str);

            for(p=str; *p ;p++ ) {
                sum+=cost[*p];
            }
        }

        printf("%.2lf$\n", sum/100);
    }

    return 0;
}
