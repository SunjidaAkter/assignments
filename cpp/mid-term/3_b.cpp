#include<bits/stdc++.h>
using namespace std;
class Human{
    public:
        string name;
        int age; 
        Human(string n,int a){
            name=n;
            age=a;
        }   
};
Human fun(){
    char h_name[101]="Adam";
    Human first(h_name,100);
    return first;
}
int main(){
    Human first=fun();
    cout<<first.name<<endl;//output Adam
    cout<<first.age<<endl;//output 100
    return 0;
}