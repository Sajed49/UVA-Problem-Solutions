#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main (void) {
	int total;
	cin>>total;
	
	string save1="0123456789";
	string save2="OIZEASGTBP";
	string s1;
	getline(cin, s1);
	
	for(int i=0; i<total; i++) {
		
		while(1) {
			string s;
			getline(cin, s);
			
			if(!s.size()) {
				if(i !=total-1)cout<<endl;
				break;
			}
			for(int j=0; j<10; j++) {
				replace(s.begin(), s.end(), save1[j], save2[j]);
			}
			cout<<s<<endl;
		}
	}
	
	return 0;
}
