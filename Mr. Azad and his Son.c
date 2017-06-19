#include <stdio.h>
#include <math.h>
int prime(unsigned long long int x);

int main (void) {
	int a;
	
	while (scanf("%d", &a)==1 && a) {
		unsigned long long int sum;
		int b;
		unsigned long long int a1=1, a2=1;
		
		for(b=0 ; b<a ; b++) a1*=2;
		a1--;
		for(b=1 ; b<a ; b++) a2*=2;
		sum=a1*a2;
		
		printf("%d %d %d\n",prime(sum), prime(a1), prime(a2)); 
		
	}	
	return 0;
}

int prime(unsigned long long int x) {
	double d;
	int a,c;
	
	d=sqrt(x);
	c=d;
	for(a=2; a<=d; a++) {
		if(!(a%c)) {
			return 1;	
		}
	}
	return 0;
}
