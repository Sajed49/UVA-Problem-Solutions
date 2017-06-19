#include <stdio.h>
#include <string.h>

int main (void) {
	int a;
	scanf("%d", &a);
	getchar();
	
	while(a--) {
		char str[10001];
		int b;
		
		gets(str);
		b=strlen(str);
		
		if(b==1 && ( str[0]=='1' || str[0]=='4')) printf("+\n");
		else if(b==2 && str[0]=='7' && str[1]=='8') printf("+\n");
		else if(str[b-1]=='5' && str[b-2]=='3') printf("-\n");
		else if(str[0]=='9' && str[b-1]=='4') printf("*\n");
		else if(str[0]=='1' && str[1]=='9'&& str[2]=='0') printf("?\n");
		
	}
	
	return 0;
}
