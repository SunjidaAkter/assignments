#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        // cout<<s;
        string word;
        stringstream ss(s);
        map<string,int>mp;
        map<string,int>mp1;
        bool freq[101]={false};
        int pos = 1;
        while(ss>>word){
            // cout<<word<<endl;
            mp[word]++;
            if(!freq[mp[word]]){
                mp1[word]=pos;
                freq[pos]=true;
                pos++;
            }
        }
        int max=0;
        string finalS;

        for (auto it = mp1.begin(); it != mp1.end(); it++) {
            if (it->second > max) {
                max = it->second;
                finalS = it->first;
            }
        }

        cout << finalS << " " << max << endl;
    } 
    return 0;
}