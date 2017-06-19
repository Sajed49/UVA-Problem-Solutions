#include <stdio.h>
int main (void) {
    short int a1, b1, a2, b2;
    short int c1, d1, c2, d2;

    short int count, a;
    scanf("%d", &a);
    for(count=1; count<=a; count++) {
        short int k1, k2, k3, k4;

        scanf("%hd %hd %hd %hd", &a1, &b1, &a2, &b2);
        scanf("%hd %hd %hd %hd", &c1, &d1, &c2, &d2);

        if(a1>c1) k1=a1;
        else k1=c1;
        if(b1>d1) k2=b1;
        else k2=d1;

        if(a2<c2)k3=a2;
        else k3=c2;
        if(b2<d2) k4=b2;
        else k4=d2;

        k1= k3-k1;
        k2= k4-k2;
        if(k1<0 || k2<0) k1=0;
        else k1*=k2;

        k3=((a2-a1)*(b2-b1)+(c2-c1)*(d2-d1))-(2*k1);
        printf("Night %hd: %hd %hd %hd\n",count, k1, k3 , 10000-(k1+k3) );

    }


    return 0;
}
