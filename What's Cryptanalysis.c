#include <stdio.h>
#include <string.h>

int main (void) {
    long long int let[26],a;
    int  b, c,d,e,f;
    char ch[1000];

    scanf("%lld", &a);
    gets(ch);

    for(b=0; b<26; b++) let[b]=0;

    for(; a ; a--) {
        gets(ch);
        for(b=0; b< strlen(ch) ; b++) {
            if(ch[b]>64 && ch[b]< 91) let[ch[b]-'A']++;
            else if(ch[b]>96 && ch[b]<123) let[ch[b]-'a']++;
        }
    }

    for(b=0,c=0; b<26; b++) {
        if(let[b]) c++;
    }


    for( ; c; c--) {
        for(b=0,d=0 ; b<26 ; b++ ){
            if(d<let[b]) {
                d= let[b];
                e=b;
            }
        }
        printf("%c %d\n",65+e, let[e]);
        let[e]=0;
    }

    return 0;
}
