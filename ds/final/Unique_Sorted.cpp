#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        set<int>s;
        stack<int>st;
        int n;cin>>n;
        // cout<<n<<endl;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            // cout<<x<<" ";
            s.insert(x);
        }
        for(auto it=s.begin();it!=s.end();it++){
            st.push(*it);
        }
        while (!st.empty())
        {
            cout<<st.top()<<" ";
            st.pop();
        }
        
        cout<<endl;
    }
    return 0;
}