#include <stdio.h>
int main (void) {
    long long int a;

    while(scanf("%lld", &a)==1 && a) {
        char str[2000001];
        int b=0,c=1,mit=1;
        long int dist=2000001;
        char flag=0;

        scanf("%s", str);

        for(b=0; b<a; b++) {
            if(str[b]=='Z') {
                c=0;
                break;
            }
            else if(str[b]=='R') {
                if(flag=='D') {
                    if(mit<dist) dist= mit;
                }
                mit=1;
                flag='R';
            }
            else if(str[b]=='D') {
                if(flag=='R') {
                    if(mit<dist) dist= mit;
                }
                mit=1;
                flag='D';
            }
            else mit++;
        }
        if(!c) printf("%d\n",c);
        else printf("%d\n", dist);
    }
    return 0;

}
