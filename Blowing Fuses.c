#include <stdio.h>

int main (void) {
    int n, m, c, count=1;

    while(scanf("%d %d %d", &n, &m, &c)==3) {
        int dev[20][2];
        int b=0,d , sum=0, high=-1,flag=1;
        if(!m && !n && !c) break;

        for( ;b<n ; b++) {
                scanf("%d", &dev[b][0]);
                dev[b][1]=0;
        }

        for(b=0; b<m ; b++) {
            scanf("%d", &d);
            if(!dev[d-1][1]) {
                dev[d-1][1]++;
                sum+=dev[d-1][0];
                if(high<sum) high=sum;
                if(high>c) flag=0;
            }
            else {
                dev[d-1][1]--;
                sum-=dev[d-1][0];
            }
        }
        printf("Sequence %d\n",count++);
        if(flag) {
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n\n", high);
        }
        else printf("Fuse was blown.\n\n");
    }
    return 0;
}
