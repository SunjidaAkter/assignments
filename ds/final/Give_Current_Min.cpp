#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    priority_queue<int,vector<int>,greater<int>>pq;
    while(n--){
        int x;cin>>x;
        pq.push(x);
        // cout<<pq.top()<<" ";
    }
    int t;cin>>t;
    while(t--){
        int a;cin>>a;
        if(a==1){
            if(!pq.empty())cout<<pq.top()<<endl;
            else cout<<"Empty"<<endl;
        }else if(a==2){
            if(!pq.empty()){
                pq.pop();
                if(!pq.empty())cout<<pq.top()<<endl;
                else cout<<"Empty"<<endl;
            }else cout<<"Empty"<<endl;    
        }else{
            int b;cin>>b;
            pq.push(b);
            cout<<pq.top()<<endl;
        }
    }
    return 0;
}