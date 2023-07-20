#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        map<int,int>mp;
        map<int,int>mp1;
        while(n--){
            int x;cin>>x;
            mp[x]++;
            
        }

        int max=0;
        int finalS;

        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second > max) {
                max = it->second;
                finalS = it->first;
            }else if(it->second == max){
                if (it->first > finalS) {
                    finalS = it->first;
                }                
                
            
                
            }
        }

        cout << finalS << " " << max << endl;
    } 
    return 0;
}