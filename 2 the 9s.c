#include <stdio.h>
#include <string.h>

int main (void) {
    char str[1001];

    while(gets(str)) {
        int sum=0, a=0, k;

        k=strlen(str);
        if(str[0]=='0' && k==1) break;
        for(a=0; a<k ; a++) sum+=(str[a]-48);

        if(!(sum%9)) {
            int digit, degree=1;

            while(sum!=9) {
                int rotate=0;
                for( ; sum ; ){
                    rotate+=(sum%10);
                    sum/=10;
                }
                degree++;
                sum=rotate;
            }
            printf("%s is a multiple of 9 and has 9-degree %d.\n", str, degree);
        }
        else printf("%s is not a multiple of 9.\n",str);
    }
    return 0;
}
