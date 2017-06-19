#include <stdio.h>

int main (void) {
    int m,n,s,k=1;

    while(scanf("%d %d", &m, &n)==2) {
        if(!m && !n) break;
        s=(m-n)/n;

        if( (m%n) && m>=n) s++;

        if(s<27) printf("Case %d: %d\n",k ,s);
        else printf("Case %d: impossible\n", k);

        k++;
    }

    return 0;
}
