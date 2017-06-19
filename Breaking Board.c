#include <stdio.h>
#include <string.h>

int main (void) {
    int a;
    char input[101];

    scanf("%d", &a);
    gets(input);
    while(a--) {
        int let[36];
        int b,c,d, sum=0;

        for(c=0; c<36; c++) let[c]=0;

        gets(input);
        b=strlen(input);
        for(c=0; c<b; c++) {
            if(input[c] > 64 && input[c]<91) let[input[c]-65]++;
            else if(input[c] > 47 && input[c]<58) let[input[c]-22]++;
        }


        for(c=0; c<36; c++) {
            for(d=c+1; d<36; d++) {
                if(let[c]<let[d]) {
                    int e;
                    e=let[c];
                    let[c]=let[d];
                    let[d]=e;
                }
            }
        }

        for(c=0; c<36; c++) {
            if(let[c]==0) break;
            if(c==0) sum+=(let[c]*2);
            else if(c>0 && c<3) sum+=(let[c]*3);
            else if(c>2 && c<6) sum+=(let[c]*4);
            else if(c>5 && c<10) sum+=(let[c]*5);
            else if(c>9 && c<15) sum+=(let[c]*6);
            else if(c>14 && c<21) sum+=(let[c]*7);
            else if(c>20 && c<26) sum+=(let[c]*8);
            else if(c>25 && c<30) sum+=(let[c]*9);
            else if(c>29 && c<33) sum+=(let[c]*10);
            else if(c>32 && c<35) sum+=(let[c]*11);
            else sum+=(let[c]*12);;
        }
        printf("%d\n", sum);


    }

    return 0;
}
