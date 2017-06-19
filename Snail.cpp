#include <iostream>

using namespace std;
int main(void) {
	double days, start, back, percent;
	
	while(cin>>days>>start>>back>>percent)
	{
		if(!days) break;
		
		double sum=0.0;
		int count=0;
		
		percent=(percent*start)/100.0;
		
		while(1) 
		{
			count++;
			
			if(start>0) sum+=start;
			start-=percent;
			
			if(sum>days) break;
			
			sum-=back;
			if(sum<0) break;
			
		}
		
		
		if(sum>=0) cout<<"success on day "<<count<<endl;
		else cout<<"failure on day "<<count<<endl;
	}
	
	return 0;
}
