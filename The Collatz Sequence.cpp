#include <iostream>

using namespace std;

int main (void) {
	int i=1;
	long long int a, b, c;
	
	while(1) {
		cin>>a>>b;
		if(a==-1 && b== -1) break;
		
		c=a;
		
		int total=1;
		
		while(a) {
			 
			 if(a==1) break;
			 else if(!(a%2)) a/=2;
			 else a=(a*3)+1;
			 
			 if(a>b) break;
			  total++;
		}
		
		cout<<"Case "<<i++<<": A = "<<c<<", limit = "<<b<<", number of terms = "<<total<<endl;
	}
	
	return 0;
}
