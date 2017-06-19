#include <stdio.h>

int main (void) {
    int a;
    scanf("%d", &a);
    while(a--) {
        int b,c,k, count1=0, count2=0;

        scanf("%d", &b);

        /* decimal to binary */
        for(c=31; c>=0 ; c--) {
            k=b>>c;
            if(k & 1) count1++;
        }

        /* hexadecimal to binary */
        for( ; b; b/=10) {
            c=(b%10);
            if(c==1 || c==2 || c==4 || c==8) count2++;
            else if (c==3 || c==5 || c==6 || c==9 ) count2+=2;
            else if(c==7) count2+=3;
        }
        printf("%d %d\n", count1, count2);
    }
    return 0;
}
