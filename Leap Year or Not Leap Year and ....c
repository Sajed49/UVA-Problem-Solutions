#include <stdio.h>

int main (void) {
    long int a,v=0;
    while(scanf("%ld", &a)==1) {
         int i=0,j=0,k=0;

         if(v) printf("\n");
         v=1;

         if((!(a%4) && (a%100)) || !(a%400)) {
            printf("This is leap year.\n");
            i=1;
         }
         if(!(a%15)) {
            printf("This is huluculu festival year.\n");
            j=1;
         }
         if(!(a%55) && i) {
            printf("This is bulukulu festival year.\n");
            k=1;
         }
         if(!i && !j && !k) printf("This is an ordinary year.\n");

    }
    return 0;

}
