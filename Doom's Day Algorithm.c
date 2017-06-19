#include <stdio.h>

int main (void) {
    char day[][20]= {
        "Saturday", "Sunday",
        "Monday", "Tuesday",
        "Wednesday", "Thursday",
        "Friday"
    };
    int cou[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int a;


    scanf("%d", &a);
    while(a--) {
        int mon, da, sum=0;
        int d;

        scanf("%d %d", &mon, &da);
        /* counting day number*/
        for(d=1 ;d<mon ;d++) {
            sum+=cou[d-1];
        }
        sum+=da;

        d=(sum%7);

        /*print the doomsday*/
        switch(d) {
        case 1:
            puts(day[d-1]);
            break;
        case 2:
            puts(day[d-1]);
            break;
        case 3:
            puts(day[d-1]);
            break;
        case 4:
            puts(day[d-1]);
            break;
        case 5:
            puts(day[d-1]);
            break;
        case 6:
            puts(day[d-1]);
            break;
        default:
            puts(day[6]);
        }
    }
    return 0;
}
