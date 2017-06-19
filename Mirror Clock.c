#include<stdio.h>

int main (void) {
    int a;
    scanf("%d", &a);

    while(a--) {
        int b,c;
        scanf("%d:%d", &b, &c);
        if(!c) {
            if(b==12) printf("12:00\n");
            else {
                (12-b < 10) ? printf("0%d:00\n",12-b): printf("%d:00\n",12-b);
            }
        }
        else {
            if(b==12) b=11;
            else if(b==11) b=12;
            else b=(11-b);
            (b<10)  ? printf("0%d:",b) : printf("%d:",b);
            (60-c<10) ? printf("0%d\n",60-c) : printf("%d\n",60-c);
        }
    }
    return 0;
}
