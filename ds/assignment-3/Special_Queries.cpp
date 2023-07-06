#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;cin>>test;
        queue<string>q1;
    while(test--){
        int x;string s;
        cin>>x;
        if(x==0){
            cin>>s;
            q1.push(s);
        }else{
            if(q1.empty()){
                cout<<"Invalid"<<endl;
            }else{
                cout<<q1.front()<<endl;
                q1.pop();
            }
        }
    }
    return 0;
}