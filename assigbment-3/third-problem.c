/*
Question: Write a function named count_before_zero() which receives an array of integers and the size of that array and counts the number of elements in that array until you find zero and returns that count. Call that function in the main function and print the count there.						Marks: 15



Sample Input
5
1 2 4 0 5
Sample Output
3
Sample Input
4
1 2 3 4
Sample Output
4
Sample Input
5
0 1 2 4 5
Sample Output
0
Sample Input
5
1 2 0 4 0
Sample Output
2


*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int count_before_zero(int* a,int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            count++;
        }else{
            return count;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("%d",count_before_zero(a,n));
    return 0;
}