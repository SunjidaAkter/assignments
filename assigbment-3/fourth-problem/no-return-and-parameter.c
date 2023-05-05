#include<stdio.h>
void change_last_index_value(int* a,int n){
    a[n-1]=100;
}
int main(){
    int n;
    scanf("%d",&n);//5
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }//10 20 30 40 50
    //before executing the funtion
    printf("Before executing the function : \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }//10 20 30 40 50
    printf("\nAfter executing the function : \n");
    change_last_index_value(a,n);
    //after executing the funtion
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }//10 20 30 40 100
    return 0;
}
/*
Sample input
5
10 20 30 40 50
sample output
Before executing the function :
10 20 30 40 50
After executing the function :
10 20 30 40 100


*/
