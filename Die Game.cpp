#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int face[4];

void initialize() {
    face[0] = 2;
    face[1] = 4;
    face[2] = 5;
    face[3] = 3;

}

int main(void) {
    ios::sync_with_stdio(false);

    int tests;
    while(cin>>tests) {

        if(tests == 0) break;

        initialize();
        string s;
        int output = 1;

        for(int i=0; i<tests; i++) {
            cin>>s;

            if(s == "north") {

                face[0] = output;
                output = face[2];
                face[2] = 7 - face[0];

            }
            else if(s == "east") {

                face[1] = output;
                output = face[3];
                face[3] = 7- face[1];
            }
            else if(s == "south") {

                face[2] = output;
                output = face[0];
                face[0] = 7 - face[2];
            }
            else {

                face[3] = output;
                output = face[1];
                face[1] = 7- face[3];
            }

        }

        cout<<output<<endl;
    }


    return 0;
}
