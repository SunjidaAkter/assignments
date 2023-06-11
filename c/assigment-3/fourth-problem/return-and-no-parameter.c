#include<stdio.h>
float get_pi_value(void){
    float result=3.1416;
    return result;
}
int main(){
    float pi=get_pi_value();
    printf("value of pi = %0.4f",pi);
    //value of pi = 3.1416
    return 0;
}


/*
sample output
value of pi = 3.1416
*/
