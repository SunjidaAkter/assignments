#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;cin>>test;
    while(test--){
        stack<char>st1;
        stack<char>st2;
        stack<char>st3;
        int n;cin>>n;
        char c;
        for(int i=0;i<n;i++){
            cin>>c;
            if(c=='R'){
                if (!st1.empty() && st1.top() == 'R') {
                    st1.pop();
                } else if(!st1.empty() && st1.top() == 'G') {
                    if(!st2.empty() && st2.top()=='Y'){
                        st2.pop();
                    }else if(!st2.empty() && st2.top()=='C'){
                        st2.push('Y');
                    }else if(!st2.empty() && st2.top()=='P'){
                        st2.push('Y');
                    }else{
                        st2.push('Y');
                    }
                    st1.pop();
                }else if(!st1.empty() && st1.top() == 'B') {
                    if(!st2.empty() && st2.top()=='P'){
                        st2.pop();
                    }else if(!st2.empty() && st2.top()=='C'){
                        st2.push('P');
                    }else if(!st2.empty() && st2.top()=='Y'){
                        st2.push('P');
                    }else{
                        st2.push('P');
                    }
                    st1.pop();
                }else{
                    st1.push(c);
                }
            }else if(c=='G'){
                if (!st1.empty() && st1.top() == 'G') {
                    st1.pop();
                } else if(!st1.empty() && st1.top() == 'R') {
                    if(!st2.empty() && st2.top()=='Y'){
                        st2.pop();
                    }else if(!st2.empty() && st2.top()=='C'){
                        st2.push('Y');
                    }else if(!st2.empty() && st2.top()=='P'){
                        st2.push('Y');
                    }else{
                        st2.push('Y');
                    }
                    st1.pop();
                }else if(!st1.empty() && st1.top() == 'B') {
                    if(!st2.empty() && st2.top()=='C'){
                        st2.pop();
                    }else if(!st2.empty() && st2.top()=='Y'){
                        st2.push('C');
                    }else if(!st2.empty() && st2.top()=='P'){
                        st2.push('C');
                    }else{
                        st2.push('C');
                    }
                    st1.pop();
                }else{
                    st1.push(c);
                }
            }else if(c=='B'){
                if (!st1.empty() && st1.top() == 'B') {
                    st1.pop();
                } else if(!st1.empty() && st1.top() == 'G') {
                    if(!st2.empty() && st2.top()=='C'){
                        st2.pop();
                    }else if(!st2.empty() && st2.top()=='Y'){
                        st2.push('C');
                    }else if(!st2.empty() && st2.top()=='P'){
                        st2.push('C');
                    }else{
                        st2.push('C');
                    }
                    st1.pop();
                }else if(!st1.empty() && st1.top() == 'R') {
                    if(!st2.empty() && st2.top()=='P'){
                        st2.pop();
                    }else if(!st2.empty() && st2.top()=='C'){
                        st2.push('P');
                    }else if(!st2.empty() && st2.top()=='Y'){
                        st2.push('P');
                    }else{
                        st2.push('P');
                    }
                    st1.pop();
                }else{
                    st1.push(c);
                }
            }
        }
        while(!st2.empty()){
            st3.push(st2.top());
            // cout<<"--"<<st3.top()<<"---";
            st2.pop();
        }
        while(!st3.empty()){
            cout<<st3.top();
            st3.pop();
        }
        if(!st1.empty()){
            cout<<st1.top();
        }
        cout<<endl;
    }
    return 0;
}