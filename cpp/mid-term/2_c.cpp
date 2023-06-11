/*
Create a class named Person where the class will have properties name(string), height(float) and age(int). Make a constructor and create a dynamic object of that class and finally pass proper values using the constructor.
*/
#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;
        float height;
        int age;
        //constructor
        Person(string n,float h,int a){
            name=n;
            height=h;
            age=a;
        }
};
int main(){
    char p_name[101]="Sunjida";
    Person* first=new Person(p_name,5.8,12);
    cout<<first->name<<endl;//outpit Sunjida
    cout<<first->height<<endl;//output 5.8
    cout<<first->age<<endl;//output 12
    return 0;
}