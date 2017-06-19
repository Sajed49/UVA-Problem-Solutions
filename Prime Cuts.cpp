#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <cstdio>

using namespace std;

int main (void) {
    bool save[1001];
    vector <int> number;
    int flag[1001];

    memset(save,true,sizeof(save));

    save[0]=false;
    for(int i=4 ; i<1001; i+=2) save[i]=false;

    int temp = sqrt(1001)+1;
    for(int i=3; i<temp; i+=2) {
        if(save[i]==true){
            for(int j=i*i ; j<1001 ; j+=i) save[j]= false;
        }
    }

    int counter =0;
    for(int i=0; i<1001; i++) {
        if(save[i]==true) {
            counter++;
            number.push_back(i);
        }
        flag[i]=counter;
    }

    int limit , num;

    while(scanf("%d %d", &limit, &num)==2) {

        printf("%d %d:",limit, num);

        if(flag[limit]%2 == 0) {
            int temp1 = num*2;

            if(temp1 >= flag[limit]) {
                int temp2 = flag[limit];
                for(int i=0; i<temp2; i++) printf(" %d",number[i]);
                putchar('\n');
            }
            else{
                int i= (flag[limit]-temp1)/2;
                int temp2 = i+temp1;
                for( ; i<temp2; i++) printf(" %d",number[i]);
                putchar('\n');
            }
        }
        else {
            int temp1 = num*2-1;

            if(temp1 >= flag[limit]) {
                int temp2 = flag[limit];
                for(int i=0; i<temp2; i++) printf(" %d",number[i]);
                putchar('\n');
            }
            else{
                int i= (flag[limit]-temp1)/2;
                int temp2 = i+temp1;
                for( ; i<temp2; i++) printf(" %d",number[i]);
                putchar('\n');
            }
        }
        putchar('\n');
    }

    return 0;
}
