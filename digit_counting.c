#include <stdio.h>

int main (void) {
	int a,b,c,d;
	
	int num[10];
	
	scanf("%d", &a);
	
	while(a) {
		for(c=0; c<10; c++) num[c]=0;
		
		scanf("%d", &b);
		
		while(b) {
			c=b;
			while (c) {
				 d=c%10;
				 num[d]++;
				 c=c/10;
			}
			
			b--;
		}
		
		for(b=0; b<9; b++) printf("%d ", num[b]);
		printf("%d", num[9]);
		printf("\n");
	
		a--;
	}
	
	return 0;
}			 
