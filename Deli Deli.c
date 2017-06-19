#include <stdio.h>
#include <string.h>

int main (void) {
    int a, b;
    int c,d,e;
    char ch;
    char str[30][2][30];
    char atto[21];
    scanf("%d %d", &a, &b);

    for( c=0; c<a ; c++) scanf("%s %s", &str[c][0], &str[c][1]);

    for(d=0;d<b; d++) {
        int flag=1;
        scanf("%s", atto);
        e=strlen(atto);


        //1st case
        for(c=0; c<a; c++) {
            if(!strcmp(str[c][0], atto)) {
                printf("%s\n", str[c][1]);
                flag=0;
                break;
            }
        }

        //2nd case
        if(flag) {
            if(atto[e-1]=='y') {
                ch= atto[e-2];
                switch(ch) {
                case 'a' :
                    break;
                case 'e' :
                    break;
                case 'i' :
                    break;
                case 'o' :
                    break;
                case 'u' :
                    break;
                default:
                    flag=0;
                    atto[e-1]='i';
                }
            }
            if(!flag) {
                printf("%s",atto);
                printf("es\n");
            }
        }


        //3rd case
        if(flag) {
            ch= atto[e-1];
            if(ch=='o') flag=0;
            else if(ch=='s') flag=0;
            else if(ch=='x') flag=0;
            else if(ch=='h' && atto[e-2]=='c') flag=0;
            else if(ch=='h' && atto[e-2]=='s') flag=0;

            if(!flag) {
                printf("%s",atto);
                printf("es\n");
            }
        }

        //4th case
        if(flag) {
            printf("%s",atto);
            printf("s\n");
        }
    }
    return 0;
}
