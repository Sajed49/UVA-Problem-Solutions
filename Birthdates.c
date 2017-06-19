#include <stdio.h>
#include <string.h>

int main () {
    int a,b=0;
    char h1[30],  l1[30];
    int hd=-1, hm=-1, hy=-1;
    int ld=32, lm=13, ly=10000;

    scanf("%d", &a);


    for(b=0 ; b<a ;b++ ) {
        char str[30];
        int da,mon,yea;

        scanf("%s", str);

        scanf("%d %d %d", &da, &mon, &yea);
        if(yea > hy) {
            hy=yea;
            hm=mon;
            hd=da;
            strcpy(h1,str);
        }
        else if(yea==hy ) {
            if(mon > hm) {
                hy=yea;
                hm=mon;
                hd=da;
                strcpy(h1,str);
            }
            else if(mon==hm) {
                if(da>hd) {
                    hy=yea;
                    hm=mon;
                    hd=da;
                    strcpy(h1,str);
                }
            }
        }


        if(yea < ly) {
            ly=yea;
            lm=mon;
            ld=da;
            strcpy(l1,str);
        }
        else if(yea==ly ) {
            if(mon < lm) {
                ly=yea;
                lm=mon;
                ld=da;
                strcpy(l1,str);
            }
            else if(mon==lm) {
                if(da<ld) {
                    ly=yea;
                    lm=mon;
                    ld=da;
                    strcpy(l1,str);
                }
            }
        }
    }
    puts(h1);
    puts(l1);

    return 0;
}
