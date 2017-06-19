#include <stdio.h>

int main (void) {
    int a, b, c;

    while(scanf("%d %d %d", &a, &b, &c)==3) {
        int d1,d2,f, flag=0;

        if(!a && !b && !c) break;

        d1=(a-b)<<1;
        d2=(b-1)<<1;



        while(1) {

            f=b;
            while(f){
                if(f%10==7) {
                    flag=1;
                    break;
                }
                f/=10;
            }
            if(!(b%7)  || flag) c--;
            if(!c) break;

            if(!d1) b+=d2;
            else b+=d1;
            flag=0;

            f=b;
            while(f){
                if(f%10==7) {
                    flag=1;
                    break;
                }
                f/=10;
            }
            if(!(b%7) || flag) c--;
            if(!c) break;

            if(!d2) b+=d1;
            else b+=d2;
            flag=0;
        }
        printf("%d\n",b);
    }
    return 0;
}
