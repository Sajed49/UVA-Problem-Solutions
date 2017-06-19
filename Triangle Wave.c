#include <stdio.h>

int main (void) {
    int a;
    scanf("%d",&a);

    while(a--) {
        int am , fre;
        int b,c;
        scanf(" %d %d", &am, &fre);
        for(;fre ; fre--) {
            for( b=1; b<=am ;  b++){
                for(c=0; c<b; c++) printf("%d",b);
                printf("\n");
            }
            for( b-=2; b>0 ;  b--){
                for(c=0; c<b; c++) printf("%d",b);
                printf("\n");
            }
            if(fre!=1 && am)printf("\n");
        }
        if(a) printf("\n");
    }
    return 0;
}
