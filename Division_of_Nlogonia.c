#include <stdio.h>

int main (void) {
	int a, b,c, d,e;
	
	while(1) {
		scanf("%d", &a);
		if(!a) break;
		
		scanf("%d %d", &b,&c);
		
		while(a) {
			scanf("%d %d", &d, &e);
			
			if( b==d || c==e)    printf("divisa\n");
			else if( d>b && e>c) printf("NE\n");
			else if( d>b && e<c) printf("SE\n");
			else if( d<b && e>c) printf("NO\n");
			else                 printf("SO\n");
			
			a--;
		}	
	}
	
	return 0;
}		
		
		
		
