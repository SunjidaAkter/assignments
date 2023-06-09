#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n],flag=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            // cout<<a[i]<<" "<<a[j]<<endl;
            if(a[i]==a[j]){
                flag=1;
                break;
            }
        }
    }
    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}