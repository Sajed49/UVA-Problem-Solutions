#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>

using namespace std;

int main(void) {
	string s1, s2;
	int result=0;
	
	while(cin>>s1) {
		if(s1=="E-N-D") break;
		
		int temp=s1.size();
		int cou=0;
		
		for(int i=0; i<temp; i++) {
			if(isalpha(s1[i]) || s1[i]=='-') cou++;
		}
		
		if(cou>result) {
			s2=s1;
			result=cou;
		}
	}
	
	for(int i=0; i<s2.size(); i++) s2[i]=tolower(s2[i]);
	
	for(int i=0; i<s2.size(); i++) {
		if(isalpha(s2[i]) || s2[i]=='-') cout<<s2[i];
	}
	cout<<endl;
	
	return 0;
}
