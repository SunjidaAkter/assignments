#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
bool recur(ll i,ll s){
    if(s==i)return true;
    else if(i>s) return false;
    return recur(i+3,s)||recur(i*2,s);
} 
int main(){
    int n;cin>>n;
    while(n--){
        ll s;cin>>s;
        if(recur(1,s))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}