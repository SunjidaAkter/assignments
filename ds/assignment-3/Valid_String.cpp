#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;cin>>test;
    while(test--){
        stack<char>st;
        string s;cin>>s;
        for(char c:s){
            if (c == 'A') {
                if (!st.empty() && st.top() == 'B') {
                    st.pop();
                } else {
                    st.push(c);
                }
            } else if (c == 'B') {
                if (!st.empty() && st.top() == 'A') {
                    st.pop();
                } else {
                    st.push(c);
                }
            }
        }
    if(st.empty())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}