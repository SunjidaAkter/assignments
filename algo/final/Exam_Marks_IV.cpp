#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        int n;cin>>n;
        int t;cin>>t;
        int s=1000-t;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int dp[n+1][s+1];
        //  memset(dp, 0, sizeof(dp));
        dp[0][0]=1;
        for(int i=1;i<=s;i++)dp[0][i]=0;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=s;j++){
                if(a[i-1]<=j){
                    dp[i][j]=(dp[i][j-a[i-1]]+dp[i-1][j]);
                    dp[i][j]=dp[i][j]%1000000007;
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        cout<<dp[n][s]<<endl;

    }
    return 0;
}
