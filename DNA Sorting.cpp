#include <bits/stdc++.h>

using namespace std;

struct node {
    string s;
    int counter;
};



int process (string save, int len) {

    int counter = 0;

    for(int i=0; i<len; i++) {

        for(int j=i+1; j<len; j++) {

            if( save[i] > save[j]) counter++;
        }
    }

    return counter;
}

int main () {
    ios::sync_with_stdio(false);

    int tests, k=0;
    cin>>tests;

    while(tests--) {

        if(k != 0) cout<<"\n";
        else k++;

        int len, total;
        cin>>len>>total;

        node save[101];
        vector <int> tags;

        for(int i=0; i<total ; i++) {

            cin>>save[i].s; // string
            save[i].counter = process(save[i].s, len);
            tags.push_back(save[i].counter);

        }

        sort(tags.begin(), tags.end());

        for(int i=0; i<total ; i++) {

            for(int j=0; j<total; j++) {

                if(tags[i] == save[j].counter) {
                    cout<<save[j].s<<"\n";
                    save[j].counter = -1;

                    break;
                }
            }
        }


    }

    return 0;
}
