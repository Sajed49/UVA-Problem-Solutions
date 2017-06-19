#include <stdio.h>

int main (void) {

    int t, a , b,c,f=0;

    scanf("%d",&t);
    while(f<t) {
        f++;
        scanf("%d",&a);
        c=0;
        while(a){
            scanf("%d", &b);
            if(b>c) c=b;
            a--;
        }

        printf("Case %d: %d\n", f,c);

    }

    return 0;
}
