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

