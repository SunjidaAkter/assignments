#include<bits/stdc++.h>
using namespace std;
int main(){
    int flag=0;
    string str;
    getline(cin,str);
    stringstream ss(str);
    string word;
    while(ss>>word){
        if(word=="Ratul"){
            flag=1;
        }
    }
    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}