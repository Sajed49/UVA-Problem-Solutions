#include <iostream>

using namespace std;

int main (void) {
    int a;

    while(cin>>a) {

        if(a<8) {
            if(a>-1)cout<<"Underflow!"<<endl;
            else if(a%2) cout<<"Overflow!"<<endl;
            else cout<<"Underflow!"<<endl;
        }
        else if(a==8) cout<<"40320"<<endl;
        else if(a==9) cout<<"362880"<<endl;
        else if(a==10) cout<<"3628800"<<endl;
        else if(a==11) cout<<"39916800"<<endl;
        else if(a==12) cout<<"479001600"<<endl;
        else if(a==13)cout<<"6227020800"<<endl;
        else cout<<"Overflow!"<<endl;

    }
    return 0;
}
