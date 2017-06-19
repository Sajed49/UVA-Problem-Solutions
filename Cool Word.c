#include <stdio.h>
#include <string.h>

int main (void) {
    int test,count=1;

    while(scanf("%d", &test)==1) {
        int total=0;

        getchar();
        while(test--){
            int i, j, k;
            int letter[26];
            char str[31];
            int flag=1;

            gets(str);
            for(i=0; i<26; i++) letter[i]=0;

            k=strlen(str);
            for(i=0; i<k; i++) letter[str[i]-97]++;

            if(k==1) flag=0;
            else {
                for(i=0; i<26; i++) {
                    if(letter[i]) {
                        for(j=i+1; j<26; j++) {
                            if(letter[i]==letter[j]) {
                                flag=0;
                                break;
                            }
                        }
                        if(!flag) break;
                    }
                }
            }
            if(flag) total++;
        }
        printf("Case %d: %d\n",count++, total);
    }
    return 0;
}
