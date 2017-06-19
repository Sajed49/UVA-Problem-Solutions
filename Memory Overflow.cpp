#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main (void) {
	int total;
	cin>>total;
	
	for(int i=1; i<=total; i++) {
		int a, b, result=0;
		string s;
		cin>>a>>b>>s;
		
		vector <char> my;
		for(int j=0; j<a; j++) {
			
			for(int k=0; k<my.size(); k++) {
				if(s[j]==my[k]) {
					result++;
					break;
				}
			}
			if(b<=0) my.erase(my.begin());
			my.push_back(s[j]);
			b--;
		}
		cout<<"Case "<<i<<": "<<result<<endl;
	}
	
	return 0;
}
