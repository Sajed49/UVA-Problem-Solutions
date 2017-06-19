#include <stdio.h>

int main (void) {
    int a, count=0;

    scanf("%d", &a);

    while(a--) {
        float l, b, h, k;
        int flag=1, tot;

        scanf("%f %f %f %f", &l ,&b, &h, &k);
        if(l>56 || b>45 || h>25) flag=0;
        l+=b+h;

        if(!flag)  {
            if(l<=125.0 && k<= 7.0) {
                printf("1\n");
                count++;
            }
            else printf("0\n");
        }
        else {
            if(l<=126.0 && k<= 7.0) {
                printf("1\n");
                count++;
            }
            else printf("0\n");
        }

    }
    printf("%d\n", count);
    return 0;
}
