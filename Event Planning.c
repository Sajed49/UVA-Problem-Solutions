#include <stdio.h>

int main (void) {
    int a, b, c, d;
    while(scanf("%d %d %d %d",&a, &b, &c, &d)==4) {
        int bug,room;
        int flag=2147483640,cost;
        int t1;

        for( ;c-- ; ) {
            scanf("%d", &bug);
            cost=a*bug;
            for(t1=0 ; t1<d ; t1++) {
                scanf("%d", &room);

                if(room>=a && b>=cost) {
                    if(flag>cost) flag=cost;
                }
            }
        }

        (flag==2147483640) ? printf("stay home\n"): printf("%d\n", flag);
    }
    return 0;
}
