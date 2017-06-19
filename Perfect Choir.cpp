#include <bits/stdc++.h>
#define endl "\n"
#define limit 10000

using namespace std;

int main (void) {
    ios::sync_with_stdio(false);

    int total;
    while(cin>>total) {

        int save[limit];
        //input
        for(int i=0; i<total; i++) cin>>save[i];

        //process
        long long int avg = 0, sum = 1;
        for(int i=0; i<total; i++) avg += save[i];

        bool flag = true;
        if((avg/total)*total != avg) flag = false;
        else avg /= total;

        for(int i=0; i<total ; i++) {

            if(save[i] < avg) sum += (avg-save[i]);
            else break;
        }

        if(flag) cout<<sum<<endl;
        else cout<<"-1\n";

    }

    return 0;
}
