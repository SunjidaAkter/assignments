#include<stdio.h>
int kilometer_to_meter(int x){
    int result=x*1000;
    return result;
}
int main(){
    int x;
    scanf("%d",&x);//5
    int result=kilometer_to_meter(x);
    printf("%d kilometers = %d meters",x,result);
    //5 kilometers = 5000 meters
    return 0;
}
/*
sample input
5
sample output
5 kilometers = 5000 meters


*/
