#include<bits/stdc++.h>
using namespace std;
class Bike {//declaring class
public:
    int price;
    char* color;
};
int main(){
    Bike honda;//declaring object
    honda.price=120000;//accessing object property
    char bike_color[101]="blue";
    honda.color=bike_color;
    cout<<honda.price<<endl;//output 120000
    cout<<honda.color;//output blue
    return 0;
}

