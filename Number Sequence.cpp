#include <bits/stdc++.h>
#define limit 31269
#define endl "\n"

using namespace std;

int summation (long long int *save) {

    long long int sum=0;
    int i=0, digits=0;

    while(sum <  2147483648) {

        i++;
        int temp = i;

        while(temp > 0) {
            digits++;
            temp/=10;
        }

        sum += digits;
        save[i-1] = sum;
    }

    return i;
}

int searchGroup(long long int *save, long long int key) {

    int high = limit-2 , low = 0;

    while (1) {

        int mid = (high+low)/2;

        if(save[mid] == key || (save[mid] > key && save[mid-1] < key)) return mid;
        else if(save[mid] < key) low = mid+1;
        else high = mid;

    }
}

void generateDigits(string& s) {

    int j=0;

    for(int i=1; i<31272; i++) {

        stack <char> stack1;

        int temp = i;
        while(temp) {

            stack1.push( (temp%10) + 48);
            temp /= 10;
        }

        while(!stack1.empty()) {
            s += stack1.top();
            stack1.pop();
        }
    }

}



int main () {

    ios::sync_with_stdio(false);
    long long int save[limit];
    string s = "";

    summation(save);
    generateDigits(s);

    int total;
    cin>>total;

    while(total--) {

        int key;
        cin>>key;

        int groupNo = searchGroup(save, key);

        if(key == 1) cout<<1<<endl;
        else cout<<s[ key - save[groupNo-1] -1]<<endl;

    }

    return 0;
}
