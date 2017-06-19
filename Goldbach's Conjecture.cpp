#include <cstdio>
#include <iostream>

using namespace std;

int main (void) {
	bool save[1000000]={false};
	save[0]=true;
	save[1]=true;
	
	
	for(int i=4; i<1000000; i+=2) save[i]=true;
	for(int i=3; i<1000000; i+=2) {
		if(save[i] == false) {
			for( int j=i+i; j<1000000; j+=i) save[j]=true;
		}
	}
	
	
	int a;
	while(scanf("%d", &a)==1 && a){
		printf("%d = ", a);
		
		for(int i= a-1; i>1; i=i-2) {
			
			if(save[i]==false && save[a-i]==false) {
				printf("%d + %d\n",a-i,i);
				break;
			}
		}
	}
	
	return 0;
}
