#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
const int N=1e5+5;
int dp[N];
bool solve(int i,int n){
    if(n==i)return /*dp[i]=*/ true;
    else if(i>n) return /*dp[i]=*/false;
    if(dp[i]!=-1)return dp[i];
        int choice1=solve(i*2,n);
        int choice2=solve(i+3,n);
        return dp[i]=(choice1||choice2);
    
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        for(int i=1;i<=N;i++){
            dp[i]=-1;
        }
        if(solve(1,n))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
