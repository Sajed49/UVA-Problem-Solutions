#include <iostream>
#include <cmath>

using namespace std;

int main (void) {
    int a;

    cin>>a;

    while(a--) {
        int test, grid;

        cin>>test>>grid;
        for( ;test--; ) {
            int x1, y1, x2, y2;

            cin>>x1>>y1>>x2>>y2;



            x1=abs(x1-x2);
            y1=abs(y1-y2);

            if(!x1 && !y1) cout<<"0"<<endl;
            else if(x1==y1) cout<<"1"<<endl;
            else if(!((x1-y1)%2)) cout<<"2"<<endl;
            else cout<<"no move"<<endl;
        }
    }
    return 0;
}
