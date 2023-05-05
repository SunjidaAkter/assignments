#include<stdio.h>
void swap1(int x,int y){
    int temp=x;
    x=y;
    y=temp;
}
void swap2(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int x=10,y=20;
    //Before calling the swap1 function values of x and y
    printf("Before calling the swap1 function values of x and y :\n");
    printf("%d %d\n",x,y);//10 20
    swap1(x,y);//no change will happen
    // After calling the swap1 function values of x and y
    printf("After calling the swap1 function values of x and y :\n");
    printf("%d %d\n",x,y);//20 10
    //Before calling the swap function values of x and y
    printf("Before calling the swap2 function values of x and y :\n");
    printf("%d %d\n",x,y);//10 20
    swap2(&x,&y);//no change will happen
    // After calling the swap2 function values of x and y
    printf("After calling the swap2 function values of x and y :\n");
    printf("%d %d",x,y);//20 10
    return 0;
}
/*
sample output
Before calling the swap function values of x and y :
10 20
After calling the swap function values of x and y :
20 10
*/