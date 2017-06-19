#include <stdio.h>

float mass (int x, char c);

int main (void) {
    char str[81];
    int a;

    scanf("%d", &a);
    gets(str);

    while(a--) {
        gets(str);
        char *p,ch=0;
        register float sum=0;
        int et=0;
        float car=12.01, hyd=1.008 , ox=16.00, nit=14.01;

        for(p=str ; *p ; p++){
            if(*p>='0' && *p<='9' ) {
                et*=10;
                et+=(*p-48);
            }
            else if(*p=='C') {
                sum+=12.01;
                if(et) sum+=mass(et,ch);
                et=0;
                ch='C';
            }
            else if(*p=='O') {
                sum+=16.00;
                if(et) sum+=mass(et,ch);
                et=0;
                ch='O';
            }
            else if(*p=='H') {
                sum+=1.008;
                if(et) sum+=mass(et,ch);
                et=0;
                ch='H';
            }
            else if(*p=='N') {
                sum+=14.01;
                if(et) sum+=mass(et,ch);
                et=0;
                ch='N';
            }
        }
        if(et) sum+=mass(et,ch);

        printf("%.3f\n", sum);

    }
    return 0;
}

float mass (int x, char c) {
    float car=12.01, hyd=1.008 , ox=16.00, nit=14.01;
    float sum;

    if(c=='C') sum=car*(x-1);
    else if(c=='O') sum=ox*(x-1);
    else if(c=='H') sum=hyd*(x-1);
    else sum=nit*(x-1);

    return sum;
}
