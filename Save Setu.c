#include <stdio.h>

int main (void) {
    int a;
    long long int sum=0, dn;
    scanf("%d", &a);
    while(a--) {
        char str[10];
        scanf("%s", str);
        if(str[0]=='r') printf("%lld\n", sum);
        else{
            scanf("%lld", &dn);
            sum+=dn;
        }
    }
    return 0;
}
