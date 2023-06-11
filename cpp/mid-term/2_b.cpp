#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char* name;
        int roll;
        Student(char* n,int r){
            strcpy(name,n);
            roll=r;
        } 
};
int main(){
    char stu_name[101]="sun";
    Student first(stu_name,1);
    cout<<first.name<<endl;//output sun
    cout<<first.roll<<endl;//output 1
    return 0;
}