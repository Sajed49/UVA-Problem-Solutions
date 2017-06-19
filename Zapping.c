#include <stdio.h>

int main (void){
    int a,b;
    while(scanf("%d %d", &a, &b)==2) {
        if(a==-1 && b==-1) break;
        if(a>b) {
            a-=b;
            if(a>50) printf("%d\n", 100-a);
            else printf("%d\n",a);
        }
        else {
            b-=a;
            if(b>50) printf("%d\n", 100-b);
            else printf("%d\n",b);
        }
    }

    return 0;
}
