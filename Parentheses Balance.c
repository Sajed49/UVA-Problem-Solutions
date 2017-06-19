#include <stdio.h>
#include <string.h>

int main (void){
    int a, b, c, d, e, f;
    char str[129];

    scanf("%d", &a);
    gets(str);

    for( ; a; a--) {
        gets(str);
        b=strlen(str);

        if(b%2) c=0;
        else {
            for(d=1; d<b ; d=d+2) {
                for(e=0; str[e]; e++) {
                    if(str[e]=='(' && str[e+d]==')') {
                        str[e]=-1;
                        str[e+d]=-1;
                    }
                    else if(str[e]=='[' && str[e+d]==']') {
                        str[e]=-1;
                        str[e+d]=-1;
                    }
                }
            }

            for(d=0,c=1 ; str[d] ; d++){
                if (str[d]!= -1) c=0;
            }
        }

        if(c) printf("Yes\n");
        else printf("No\n");


    }

    return 0;
}
