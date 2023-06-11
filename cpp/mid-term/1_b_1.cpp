#include<bits/stdc++.h>
using namespace std;
int main(){
    //the array we needed before
    //1 2 3
    int *a=new int[3];
    for(int i=0;i<3;i++){
        cin>>a[i];//input 1 2 3
    }
    for(int i=0;i<3;i++){
        cout<<a[i]<<" ";//output 1 2 3
    }
    cout<<endl;
    //the array we need now
    //1 2 3 4 5
    int *b=new int[5];
    for(int i=0;i<3;i++){
        b[i]=a[i];
    }
    b[3]=4,b[4]=5;
    for(int i=0;i<5;i++){
        cout<<b[i]<<" ";//output 1 2 3 4 5
    }
    delete[] a;
    return 0;
}