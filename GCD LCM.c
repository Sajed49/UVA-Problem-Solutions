#include <stdio.h>

int main (void) {
	int total;
	
	scanf("%d", &total);
	
	while(total--) {
		int lcm, gcd;
		
		
		scanf("%d %d", &gcd, &lcm);
		if(lcm%gcd) printf("-1\n");
		else {
			printf("%d %d\n", gcd , lcm);
		}
	}
	return 0;
}
