#include <stdio.h>

int main (void) {
    int a;

    while (scanf("%d", &a) && a!=-1 ) {
        char str[101];
        int sv[26];
        int i,j=0,k=7;
        char *p;

        /*initialization*/
        printf("Round %d\n", a);
        for( i=0; i<26 ;i++) sv[i]=0;

        /*input string*/
        scanf("%s", str);
        for(p=str; *p; p++) {
            sv[*p-97]=1;
        }

        for( i=0; i<26 ;i++) {
            if(sv[i]==1) j++;
        }

        /*output string*/
        scanf("%s", str);
        for(p=str; *p; p++) {
            if(sv[*p-97]==1) {
                j--;
                sv[*p-97]=2;
            }
            else if(sv[*p-97]==0) {
                k--;
                sv[*p-97]=2;
            }

            if(!j) {
                printf("You win.\n");
                break;
            }
            if(!k) {
                printf("You lose.\n");
                break;
            }
        }

        if(j && k) printf("You chickened out.\n");

    }

    return 0;
}
