#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}

int main (void) {
    long long int p,g;

    while(scanf("%lld %lld", &p, &g)==2) {
        int data[100001];
        int t1, t2,q;
        long long int w=0, l=0, d=0;

        while(p--) {
            scanf("%d %d", &t1, &t2);
            if(t1>t2) w++;
            else if (t1==t2) d++;
            else {
                data[l++]=(t1-t2);
            }
        }
        if(d==g) {
            w+=d;
            d=g=0;
        }
        else if(d>g){
            w+=g;
            d-=g;
            g=0;
        }
        else {
            w+=d;
            g-=d;
            d=0;
        }

        qsort (data, l, sizeof(int), compare);


        for(t1=l-1; t1>-1 && g>0 ; t1--) {
            q=-data[t1];
            if(q<g) {
                w++;
                g-=(q+1);
            }
            else if(q == g) {
                d++;
                g-=q;
            }
            else break;
        }
        printf("%lld\n", (w*3)+d);


    }

    return 0;

}
