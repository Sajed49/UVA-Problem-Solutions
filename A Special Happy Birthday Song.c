#include <stdio.h>

int main (void) {
    short a, b=0,c;
    char name[100][101];

    scanf("%hd", &a);

    for( ; b<a ; b++) scanf("%s", &name[b]);
    for(b=0,c=0 ; b<a; b+=16) {
        if(c==a) c=0;
        printf("%s: Happy\n", name[c++]);
        if(c==a) c=0;
        printf("%s: birthday\n",name[c++] );
        if(c==a) c=0;
        printf("%s: to\n",name[c++] );
        if(c==a) c=0;
        printf("%s: you\n", name[c++]);

        if(c==a) c=0;
        printf("%s: Happy\n",name[c++] );
        if(c==a) c=0;
        printf("%s: birthday\n",name[c++] );
        if(c==a) c=0;
        printf("%s: to\n", name[c++]);
        if(c==a) c=0;
        printf("%s: you\n", name[c++]);

        if(c==a) c=0;
        printf("%s: Happy\n",name[c++] );
        if(c==a) c=0;
        printf("%s: birthday\n",name[c++] );
        if(c==a) c=0;
        printf("%s: to\n", name[c++]);
        if(c==a) c=0;
        printf("%s: Rujia\n", name[c++]);

        if(c==a) c=0;
        printf("%s: Happy\n", name[c++]);
        if(c==a) c=0;
        printf("%s: birthday\n", name[c++]);
        if(c==a) c=0;
        printf("%s: to\n",name[c++] );
        if(c==a) c=0;
        printf("%s: you\n", name[c++]);
    }

    return 0;
}
