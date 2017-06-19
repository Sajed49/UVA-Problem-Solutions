#include <stdio.h>

int main (void) {
    long long int i,j,k,l,m,n=0,s;

    scanf("%I64d %I64d", &i,&j);

        k=i;
        l=j;
        if(i>j) {
            k=j;
            l=i;
        }

        while(k <= l) {
            m = 1;
            s = k;
            while (s != 1) {
                if(s%2 == 0) s >>= 1;
                else s= s*3+1;
                m++;
            }
            if(m>n) n=m;
            k++;
        }

        printf("%I64d %I64d %I64d", i , j , n);
    return 0;
}
