#include <stdio.h>
#include <string.h>

double fact (int x);

int main (void) {
    int a, b=1;

    scanf("%d", &a);
    getchar();
    while(a--) {
        char str[21];
        int cou[26];
        int c,d;
        double sum=1;

        for(c=0; c<26; c++) cou[c]=0;
        gets(str);

        d=strlen(str);
        for(c=0; c<d; c++) cou[str[c]-65]++;

        for(c=1; c<=d; c++) sum*=c;

        for(c=0; c<26; c++) {
            if(cou[c]>1) sum/=fact(cou[c]);
        }

        printf("Data set %d: %.0lf\n",b++,sum);
    }
    return 0;
}

double fact (int x){
    double k=1;
    int a=1;

    for( ; a<=x; a++) {
        k*=a;
    }

    return k;
}
