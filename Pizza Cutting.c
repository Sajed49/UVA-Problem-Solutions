#include <stdio.h>

int main (void) {
	long long p;
	
	while(scanf("%lld",&p)==1 && p>-1) printf("%lld\n",((p*(p+1))/2)+1);
		
	return 0;
}		
