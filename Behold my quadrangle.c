#include <stdio.h>

int main (void) {
    int a;
    scanf("%d", &a);
    while(a--) {
        int point[4];
        int b,c,d;
        scanf("%d %d %d %d", &point[0], &point[1], &point[2], &point[3]);

        if(point[0]==point[1] && point[0]==point[2] && point[0]==point[3]) printf("square\n");
        else {
            for(b=0; b<4; b++) {
                for (c=b+1;c<4 ;c++) {
                    if(point[b]<point[c]) {
                        d=point[b];
                        point[b]=point[c];
                        point[c]=d;
                    }
                }
            }
            if(point[0]==point[1] && point[2]==point[3]) printf("rectangle\n");
            else if(point[0] < (point[1]+point[2]+point[3]) ) printf("quadrangle\n");
            else printf("banana\n");
        }


    }
    return 0;
}
