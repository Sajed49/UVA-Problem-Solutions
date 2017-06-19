#include <stdio.h>

int main (void) {
    int a, count=1;

    scanf("%d", &a);
    while(a--) {
        int r;
        int x,y,z;
        scanf("%d", &r);

        x= (r*9)/4;
        y= (r*11)/4;
        z= (r*3)/2;
        printf("Case %d:\n%d %d\n%d %d\n%d %d\n%d %d\n", count++,-x, z, y, z, y, -z, -x, -z);
    }
    return 0;
}
