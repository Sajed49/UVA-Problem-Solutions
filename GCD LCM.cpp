#include <iostream>

using namespace std;

int main (void) {
    int a;

    cin>>a;
    while(a--) {
        int b,c;

        cin>>b>>c;
        (!(c%b)) ? cout<<b<<" "<<c<<endl : cout<<-1<<endl;
    }
    return 0;
}
