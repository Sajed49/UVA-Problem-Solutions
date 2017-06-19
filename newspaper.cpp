#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

int main (void) {
	int total;
	cin>>total;
	
	for(int i=1; i<=total; i++) {
		int table[127]={0};
		int characterNo;
		double grandSum=0;
		
		cin>>characterNo;
		
		struct my {
			char ch;
			double value;
		} save[characterNo];
		
		for(int j=0; j<characterNo; j++) {
			cin>> save[j].ch >> save[j].value;
		}
		
		int lineNo;
		cin>>lineNo;
		
		string s;
		getline(cin, s);
		for(int j=0; j<lineNo; j++) {
			getline(cin,s);
			for(int k=0; k<characterNo; k++) {
				int sum=count(s.begin(), s.end(), save[k].ch);
				grandSum+=(save[k].value*sum);
			}			
		}
		
		cout<<setprecision(2)<<fixed<<(grandSum/100.0)<<'$'<<endl;
	}
	return 0;
}
