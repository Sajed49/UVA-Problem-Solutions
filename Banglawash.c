#include <stdio.h>

int main (void) {
    int a, count=1;
    scanf("%d", &a);

    while(a--) {
        int b, c=0;
        char mat[12];
        int b1=0, w=0, ab=0, ti=0;

        scanf("%d", &b);
        getchar();
        gets(mat);

        for( ;c<b; c++) {
            switch(mat[c]) {
            case 'B':
                b1++;
                break;
            case 'W':
                w++;
                break;
            case 'A':
                ab++;
                break;
            default:
                ti++;
            }
        }
        if(ab==b) printf("Case %d: ABANDONED\n",count);
        else if( b1==w) printf("Case %d: DRAW %d %d\n",count, b1,ti);
        else if((b1+ab)==b) printf("Case %d: BANGLAWASH\n", count);
        else if((w+ab)==b) printf("Case %d: WHITEWASH\n", count);
        else if(b1>w) printf("Case %d: BANGLADESH %d - %d\n", count,b1, w );
        else printf("Case %d: WWW %d - %d\n", count , w, b1);
        count++;
    }
    return 0;
}
