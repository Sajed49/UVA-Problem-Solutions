#include<string>
#include <iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

bool cmp(string a, string b) {
    string x= a+b;
    string y= b+a;

    return x>y;
}

int main (void) {

    register int total;

    while(cin>>total && total) {

        string *save = new string [total];

        for(register int i=0; i<total; i++) cin>>save[i];

        sort(save, save+total, cmp);

        for(register int i=0; i<total; i++) cout<<save[i];
        cout<<endl;

        delete [] save;
    }
}
