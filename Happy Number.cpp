#include <iostream>

using namespace std;
int summation(long long int x);

int main (void) {
    int inputNumber;

    while(cin>>inputNumber) {
        int test=1;
        while(inputNumber--) {
            long long int num, num2;
            int sum, flag=0;

            cin>>num2;

            if(num2==1 || num2==7) flag=1;
            else {
                for( num=num2 ;num>9; ) {
                    sum=summation(num);
                    if(sum==1 || sum==7) {
                        flag=1;
                        break;
                    }
                    num=sum;
                }
            }

            (flag)? cout<<"Case #"<<test<<": "<<num2<<" is a Happy number."<<endl : cout<<"Case #"<<test<<": "<<num2<<" is an Unhappy number."<<endl;
            test++;
        }
    }
    return 0;
}

int summation(long long int x) {
    int sum=0;
    int mod;

    while(x) {
        mod=x%10;
        sum+=(mod*mod);
        x/=10;
    }

    return sum;
}
