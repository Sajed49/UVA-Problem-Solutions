#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;
int main (void) {
	int total;
	cin>>total;
	
	for(int i=0; i<total; i++) {
		double l,b,s;
		
		cin>>l>>b>>s;
		if(b>l) swap(l,b);
		
		if(!s) {
			cout<<"100.000000%"<<endl;
		}
		else if((l*b)<=s) cout<<"0.000000%"<<endl;
		else {
			double area=l*b;
			double selected=b*(s/b);
		
			selected+=(s*(log1p(b-1)-log1p((s/l)-1)));
		
			cout<<setprecision(6)<<fixed<<((area-selected)/area)*100<<'%'<<endl;
		}
		
		
	}
	
	return 0;
}
