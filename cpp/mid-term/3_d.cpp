/*
Create two objects of the Person class from question 2-c and initialize them with proper value. Now compare whose age is greater, and print his/her name.
*/
// #include<bits/stdc++.h>
// using namespace std;
// class Person{
//     public:
//         string name;
//         float height;
//         int age;
//         //constructor
//         Person(string n,float h,int a){
//             name=n;
//             height=h;
//             age=a;
//         }
// };
// int main(){
//     char s_name[101]="Abdus Salam"; 
//     char k_name[101]="Abdul Kalam"; 
//     Person salam(s_name,5.8,30);
//     Person kalam(k_name,5.9,31);
//     if(salam.age>kalam.age){
//         cout<<salam.name;
//     }else{
//         cout<<kalam.name;
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// class Student{
//     public:
//         string name;
//         int roll;
//         Student(string n,int r){
//             name=n;
//             roll=r;
//         }
// };
// int main(){
//     char stu_name[101]="sun";
//     Student first(stu_name,1);
//     cout<<first.name<<endl;//output sun
//     cout<<first.roll<<endl;//output 1
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
class MyClass {
public:
    int age;
    int salary;
};
int main(){
    MyClass* me=new MyClass;
    int my_age=me->age=7;
    cout<<my_age;//output 7//using dynamic object
    delete me;//releasing the memory
    return 0;
}
