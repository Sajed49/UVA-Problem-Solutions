#include <stdio.h>

int main (void) {
	long long a,b;
	int c;
	
	scanf("%d", &c);
	while(c) {
		scanf("%lld %lld", &a, &b);
		if(a>b) printf(">\n");
		else if(b>a) printf("<\n");
		else if(b=a) printf("=\n");
		
		c--;
	}
	
	return 0;
}		
