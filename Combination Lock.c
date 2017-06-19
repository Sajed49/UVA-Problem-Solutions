#include <stdio.h>

int main (void) {
    int a, b, c, d;

    while(scanf("%d %d %d %d", &a, &b, &c, &d)==4) {
        int sum=120;
        if(!a && !b && !c && !d) break;

        if(a>=b) sum+=(a-b);
        else sum+=(40-b+a);

        if(c>=b) sum+=(c-b);
        else sum+=(40-b+c);

        if(c>=d) sum+=(c-d);
        else sum+=(40-d+c);



        printf("%d\n",sum*9);


    }
    return 0;
}
