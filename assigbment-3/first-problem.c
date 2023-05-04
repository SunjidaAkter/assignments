/*
Question: Write a C program to take positive integer N as input and print a pattern shown in the sample input output.						Marks: 20
Constraints: 1 <= N <= 5


Sample Input
5
Sample Output
    1
   123
  12345
 1234567
123456789
 1234567
  12345
   123
    1    
Sample Input
4
Sample Output
   1
  123
 12345
1234567
 12345
  123
   1   


*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int s=n-1,k=1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("%d",j);
        }
        if(i<=n-1){
            s--;
            k+=2;
        }else{
            s++;
            k-=2;
        }
        printf("\n");
    }
    return 0;
}