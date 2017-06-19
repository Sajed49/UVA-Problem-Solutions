#include <stdio.h>

int main (void) {
    int a,c,b,d=1;


    while(scanf("%d", &a)==1 && a) {
        for(c=0 ; a ;a-- ){
            scanf("%d", &b);
            if(b==0) c--;
            else c++;
        }
        printf("Case %d: %d\n",d ,c);
        d++;
    }

    return 0;
}
