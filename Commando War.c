#include <stdio.h>

int main (void) {
    int a,b=1;
    while(scanf("%d", &a)==1 && a ) {
        int com[1000][2];
        int c=0,d,e,sum=0,temp=0;

        for( ;c<a; c++) scanf("%d %d", &com[c][0], &com[c][1]);


        for(c=0; c<a; c++) {
            for(d=c+1; d<a; d++) {
                if(com[c][1]<com[d][1]) {
                    e=com[c][1];
                    com[c][1]=com[d][1];
                    com[d][1]=e;
                    e=com[c][0];
                    com[c][0]=com[d][0];
                    com[d][0]=e;
                }
            }
        }

        for(c=0; c<a; c++) {
            if(com[c][0]>sum) {
                sum+=(com[c][0]-temp);
                temp=0;
            }
            else {
                temp-=com[c][0];
            }

            if(com[c][1]>temp) {
                sum+=(com[c][1]-temp);
                temp=com[c][1];
            }
        }

        printf("Case %d: %d\n",b++, sum);
    }
    return 0;
}
