#include <stdio.h>

int main (void) {
    int a,b;
    scanf("%d", &a);
    for(b=1; b<=a; b++){
       char str[10][103];
       int tag[10];
       int e,high=0,g;

       for(e=0; e<10; e++) {
            scanf("%s %d", str[e], &tag[e] );
            if(tag[e]>high) high=tag[e];
       }
       printf("Case #%d:\n", b);
       for(e=0; e<10; e++) {
            if(tag[e]==high) printf("%s\n", str[e]);
       }

    }
    return 0;
}
