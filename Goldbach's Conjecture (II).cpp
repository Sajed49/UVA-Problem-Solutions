#include <cstdio>
#include <iostream>

using namespace std;

int main (void) {
	bool save[32768]={false};
	save[0]=true;
	save[1]=true;

	for(int i=3; i<32768; i+=2) {
		if(save[i] == false) {
			for( int j=i+i; j<32768; j+=i) save[j]=true;
		}
	}


	int a;
	while(scanf("%d", &a)==1 && a){
		int counter=0;
		int limit=1;

		if(a!=4){
            for(int i= a-1; i>limit; i=i-2) {
                if(save[i]==false && save[a-i]==false) {
                    counter++;
                    limit=a-i;
                }
            }
            printf("%d\n", counter);
		}
		else printf("1\n");
	}

	return 0;
}
