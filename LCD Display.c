#include <stdio.h>
#include <string.h>

void dis (int x);
void v_dis (int x);
void media (int x , int y, int z);

int main (void) {
    char str[11];
    int a, b, c, d;

    while (scanf("%d %s", &a,str)==2) {
        if(!a) break;
        b=strlen(str);

        for(c=0; c<b ; c++){
            if(str[c]=='0') dis(a);
            else if(str[c]=='2') dis(a);
            else if(str[c]=='3') dis(a);
            else if(str[c]=='5') dis(a);
            else if(str[c]=='6') dis(a);
            else if(str[c]=='7') dis(a);
            else if(str[c]=='8') dis(a);
            else if(str[c]=='9') dis(a);
            else v_dis(a);
            if(!(c==b-1)) printf(" ");
        }
        printf("\n");

        for(d=0; d<a; d++) {
            for(c=0; c<b ; c++){
                if(str[c]=='0') media( 1,a,1 );
                else if(str[c]=='1') media( 0,a,1 );
                else if(str[c]=='2') media( 0,a,1 );
                else if(str[c]=='3') media( 0,a,1 );
                else if(str[c]=='4') media( 1,a,1 );
                else if(str[c]=='5') media( 1,a,0 );
                else if(str[c]=='6') media( 1,a,0 );
                else if(str[c]=='7') media( 0,a,1 );
                else if(str[c]=='8') media( 1,a,1 );
                else if(str[c]=='9') media( 1,a,1 );

                if(c !=b-1) printf(" ");
            }
            printf("\n");
        }

        for(c=0; c<b ; c++){
            if(str[c]=='2') dis(a);
            else if(str[c]=='3') dis(a);
            else if(str[c]=='4') dis(a);
            else if(str[c]=='5') dis(a);
            else if(str[c]=='6') dis(a);
            else if(str[c]=='8') dis(a);
            else if(str[c]=='9') dis(a);
            else v_dis(a);
            if(!(c==b-1)) printf(" ");
        }
        printf("\n");


        for(d=0; d<a; d++) {
            for(c=0; c<b ; c++){
                if(str[c]=='0') media( 1,a,1 );
                else if(str[c]=='1') media( 0,a,1 );
                else if(str[c]=='2') media( 1,a,0 );
                else if(str[c]=='3') media( 0,a,1 );
                else if(str[c]=='4') media( 0,a,1 );
                else if(str[c]=='5') media( 0,a,1 );
                else if(str[c]=='6') media( 1,a,1 );
                else if(str[c]=='7') media( 0,a,1 );
                else if(str[c]=='8') media( 1,a,1 );
                else if(str[c]=='9') media( 0,a,1 );

                if(c !=b-1) printf(" ");
            }
            printf("\n");
        }

        for(c=0; c<b ; c++){
            if(str[c]=='0') dis(a);
            else if(str[c]=='2') dis(a);
            else if(str[c]=='3') dis(a);
            else if(str[c]=='5') dis(a);
            else if(str[c]=='6') dis(a);
            else if(str[c]=='8') dis(a);
            else if(str[c]=='9') dis(a);
            else v_dis(a);
            if(!(c==b-1)) printf(" ");
        }
        printf("\n");



    printf("\n");

    }
    return 0;
}

void dis (int x) {
    printf(" ");
    for( ; x; x--) printf("-");
    printf(" ");
}

void v_dis (int x) {
    printf(" ");
    for( ; x; x--) printf(" ");
    printf(" ");
}

void media (int x , int y , int z) {
    if(x) printf("|");
    else printf(" ");

    for(; y; y--) printf(" ");

    if(z) printf("|");
    else printf(" ");
}
