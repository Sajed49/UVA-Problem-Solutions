#include <stdio.h>

int main (void) {
    char str[601];
    char *p;
    int a;

    scanf("%d", &a);
    gets(str);

    while(a--) {
        int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,fin=1000;
        gets(str);
        p=str;

        for( ; *p ; ) {
            switch(*p++) {
                case 'M':
                    a1++;
                    break;
                 case 'A':
                    a2++;
                    break;
                case 'R':
                    a3++;
                    break;
                case 'G':
                    a4++;
                    break;
                case 'I':
                    a5++;
                    break;
                case 'T':
                    a6++;
            }
        }
        a2/=3;
        a3/=2;

        if(fin>a1)  fin=a1;
        if(fin>a2)  fin=a2;
        if(fin>a3)  fin=a3;
        if(fin>a4)  fin=a4;
        if(fin>a5)  fin=a5;
        if(fin>a6)  fin=a6;

        printf("%d\n", fin);
    }
    return 0;
}
