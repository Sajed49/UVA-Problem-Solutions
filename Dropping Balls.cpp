#include <bits/stdc++.h>
#define endl "\n"
#define limit

using namespace std;

int process(int &level, int &number) {

    int high = pow(2,level-1);
    int low = 1;

    while (low <= high) {

        int mid = (high+low)/2;
        if(high == low) return (mid+pow(2, level-1)-1);

        if(number%2) {

            number = (number/2) +1;
            high = mid;
        }
        else {

            number /= 2;
            low = mid +1;
        }

    }


}

int main (void) {
    ios::sync_with_stdio(false);

    int total;
    while(cin>>total) {

        if(total == -1) return 0;

        for(int i=0; i<total; i++) {

            int level, number;
            cin>>level>>number;

            cout<<process(level, number)<<endl;
        }

    }

    return 0;
}
