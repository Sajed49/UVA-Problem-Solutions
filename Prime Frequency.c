#include <stdio.h>
#include <string.h>
#include <math.h>

int PrimeCheck (int x);

int main (void) {
    int test;

    while(scanf("%d", &test)==1) {
        int num=1;

        getchar();
        for( ;test--; ) {
            char word[2002];
            int alphabetCount[125];
            int i=0,k=0;
            int totalPrime=0;

            gets(word);
            for(i=45; i<124 ; i++) alphabetCount[i]=0;

            for(k=strlen(word), i=0 ; i<k; i++) alphabetCount[word[i]]++;

            for(i=45; i<124; i++) {;
                if(alphabetCount[i]>1 && PrimeCheck(alphabetCount[i])) {
                    totalPrime++;
                    alphabetCount[i]=-1;
                }
            }

            printf("Case %d: ",num++);
            if(totalPrime) {
                for( i=45; i<124; i++) {
                    if(alphabetCount[i]==-1) putchar(i);
                }
                putchar('\n');
            }
            else puts("empty");
        }
    }
    return 0;
}

int PrimeCheck (int x) {
    int a, c;
    int flag=1;

    c=sqrt(x);
    for(a=2; a<=c; a++) {
        if(!(x%a)) {
            flag=0;
            break;
        }
    }
    return flag;
}
