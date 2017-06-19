#include <stdio.h>

int cap(int a);

int main (void) {
	int i,j=0,k,l;
	
	scanf("%d", &i);
	
	for( ; j<i; j++) {
		scanf("%d", &k);
		l=cap(k);
		printf("Case %d: %d\n", j+1 , l);
		
	}
	
	return 0;
}


int cap(int a) {
	int c=0,d,e;
	int mem[11];
	
	for( ; c<a ; c++) scanf("%d", &mem[c]);
	for(c=0 ; c<a ; c++) {
		for(d=c+1 ; d<a ; d++) {
			if(mem[c]>mem[d]) {
				e=mem[c];
				mem[c]=mem[d];
				mem[d]=e;
			}
		}
	}
	
	return mem[a/2];
}	
				
			 
