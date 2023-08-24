#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
const int N=1e3+5;
int main(){
    int e;cin>>e;
    vector<pii>v;
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    while(e--){
        int x,y;cin>>x>>y;
        pq.push({x,y});
    }
    while(!pq.empty()){
        cout<<pq.top().first<<" "<<pq.top().second<<endl;
        pq.pop();
    }
    return 0;
}