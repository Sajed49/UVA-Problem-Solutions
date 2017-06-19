#include <stdio.h>

int main (void) {
    int a,i,j=1,k;
    char str1[101];

    scanf("%d", &k);
    gets(str1);

    while(k) {
        a=0,i=0;

        gets(str1);

        while(str1[a]){

            if      (str1[a]== 'a' || str1[a]=='d' || str1[a]=='g' || str1[a]=='j' || str1[a]=='m' || str1[a]=='p' || str1[a]=='t' || str1[a]=='w' || str1[a]==' ' ) i++;
            else if (str1[a]== 'b' || str1[a]=='e' || str1[a]=='h' || str1[a]=='k' || str1[a]=='n' || str1[a]=='q' || str1[a]=='u' || str1[a]=='x') i=i+2;
            else if (str1[a]== 'c' || str1[a]=='f' || str1[a]=='i' || str1[a]=='l' || str1[a]=='o' || str1[a]=='r' || str1[a]=='v' || str1[a]=='y') i=i+3;
            else i=i+4;

            a++;
        }
        printf("Case #%d: %d\n",j, i);

        j++;
        k--;

    }

    return 0;
}
