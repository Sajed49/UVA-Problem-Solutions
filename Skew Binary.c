#include <stdio.h>
#include <string.h>

long long int power (int x);

int main (void) {
	char str[33];
	long long int out, a,b;
	int i,j,k;
	
	while(1) {
		gets(str);
		i= strlen(str);
		if(str[0]=='0') break;
		
		
		
		for(j=i-1,k=1, out=0; j>-1; j--,k++) {
			out= out+((str[j]-48)*(power(k)-1));
		
		} 
		
		printf("%lld\n", out);
		
	}
	
	return 0;
}		


long long int power (int x) {
	long long int l=1;
	
	while (x) {
		l = l*2;
		x--;
	}	
	
	return l;
}	
