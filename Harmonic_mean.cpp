#include <iostream>
#include <algorithm>

using namespace std;
long long int Gcd (long long int lcm,long long int my) {
	
	if(lcm< my) swap(lcm, my);
	
	while((lcm%my)!= 0) {
		long long temp=lcm;
		lcm=my;
		my=(temp%my);
	}	
	
	return my;
}

long long int Lcm (long long int lcm,long long int my) {
	long long gcd= Gcd(lcm, my);
	
	return (lcm*my)/gcd;
}

int main (void) {
	int tot;
	
	cin>>tot;
	for(int i=1; i<=tot ; i++) {
		int lin;
		
		cin>>lin;
		long long int array[lin];
		long long int lcm=1, sum=0;
		
		for(int j=0; j<lin; j++) {
			cin>>array[j];
			lcm =Lcm(lcm, array[j]);
		}
		

		for(int j=0; j<lin; j++) {
			long long int key = Gcd(lcm,array[j]);
			sum+=(lcm/array[j]);
		}
		lcm*=lin;
		int some= Gcd(lcm, sum);
		
		cout<<"Case "<<i<<": "<<lcm/some<<'/'<<sum/some<<endl;
	}
	return 0;
}
