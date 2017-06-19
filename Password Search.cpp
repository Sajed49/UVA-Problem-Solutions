#include <iostream>
#include <algorithm>
#include <cstdio>
#include <map>
#include <string>

using namespace std;

int main (void) {

    int len;
    string s;
    while(cin>>len>>s) {
        map <string, int> save;

        map <string , int> :: iterator it;
        int temp=s.length()-len+1;
        for(int i=0; i<temp; i++) {
            string s1= s.substr(i, len);


            pair < map <string , int> :: iterator , bool> ret;
            ret= save.insert(pair <string, int> (s1,1));
            if(ret.second == false) {
                save[s1]++;
            }
        }


        string result;
        int MAX=-1;
        for(it= save.begin(); it != save.end(); it++) {
            if(it->second > MAX) {
                MAX = it->second;
                result = it->first;
            }
        }
        cout<<result<<endl;
    }
    return 0;
}
