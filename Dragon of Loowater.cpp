#include <bits/stdc++.h>
#define endl "\n"
#define limit 20000

using namespace std;


int main (void) {

    ios::sync_with_stdio(false);

    int heads, knights;
    while(cin>>heads>>knights) {

        if(!heads && !knights) return 0;

        long long int drag[limit], soldier[limit];

        //input
        for(int i=0; i<heads; i++) cin>>drag[i];
        for(int i=0; i<knights; i++) cin>>soldier[i];


        //Processing
        if( knights < heads) {
            cout<<"Loowater is doomed!\n";
            continue;
        }

        sort(drag, drag+heads);
        sort(soldier, soldier+knights);

        long long int sum = 0;
        bool flag = true;

        for(int i=0, j=0; i<heads; i++) {

            for( ; j<knights; j++) {

                if(drag[i] <= soldier[j]) {

                    drag[i] = -1;
                    sum += soldier[j];
                    j++;
                    break;
                }
            }
        }

        if(drag[heads-1] == -1) cout<<sum<<endl;
        else cout<<"Loowater is doomed!\n";
    }

    return 0;
}
