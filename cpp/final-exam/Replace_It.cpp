#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;cin>>test;
    for(int i=0;i<test;i++){
        string str,s;cin>>str>>s;
        while(str.find(s)!=-1){
            str.replace(str.find(s),s.size(),"$");
        }
        cout<<str<<endl;
    }
    return 0;
}