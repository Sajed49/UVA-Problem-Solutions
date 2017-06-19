#include <iostream>
#include <algorithm>
#include <cstdio>

#define routes 101

using namespace std;

bool cmp(int a, int b) {
    return a>b;
}

int main (void) {

    int buses, limit, fine;

    while(scanf("%d %d %d", &buses, &limit, &fine)==3) {

        if(!buses && !limit && !fine) break;

        int morning[routes];
        int evening[routes];


        for(int i=0; i<buses; i++) scanf("%d", &morning[i]);
        for(int i=0; i<buses; i++) scanf("%d", &evening[i]);

        sort(morning, morning+buses);
        sort(evening, evening+buses, cmp);

        int counter = 0;
        for(int i=0; i<buses; i++) {
            if(morning[i]+evening[i] > limit) counter += (morning[i]+evening[i]-limit);
        }

        printf("%d\n", counter*fine);
    }

    return 0;
}
