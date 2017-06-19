#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

int main (void) {
    int total;
    while(cin>>total) {
        if(!total) break;

        int *save= new int [total];
        for(int i=0; i<total; i++) save[i]= -1;

        int edge;
        cin>>edge;

        vector <int> graph[total];
        int flag=1;

        for(int i=0; i<edge; i++) {
            int x,y;
            cin>>x>>y;

            graph[x].push_back(y);
        }

        queue <int> test;
        test.push(0);
        save[0]=0;

        bool visited[300]={false};

        while(!test.empty()) {
            int temp= test.front();
            int len = graph[temp].size();

            if(visited[temp]==false) {
                for(int i=0; i<len ;i++) {

                    test.push(graph[temp][i]);
                    if(save[graph[temp][i]] != save[temp]) {
                        if(save[temp]==0) save[graph[temp][i]]=1;
                        else save[graph[temp][i]]=0;
                    }
                    else {
                     flag=0;
                     break;
                    }
                }
            }

            visited[temp]=true;
            if(!flag) break;
            test.pop();
        }

        if(flag) cout<<"BICOLORABLE."<<endl;
        else cout<<"NOT BICOLORABLE."<<endl;

        delete [] save;
    }
    return 0;
}
