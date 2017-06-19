#include <stdio.h>

int main (void) {
    int a, b=1;
    scanf("%d", &a);

    while(a--){
    int c, d, e, f, sum=0, count=0;

    scanf("%d %d %d", &c, &d, &e);

    while(c--) {
        scanf("%d", &f);
        sum+=f;
        if(sum<=e && count<d ) count++;
    }


    printf("Case %d: %d\n",b++,count);
    }
    return 0;
}
