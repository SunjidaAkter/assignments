/*
Question: Write a C program to take positive integer N as input and print a pattern shown in the sample input output.						Marks: 20
Constraints: 1 <= N <= 9


Sample Input
5
Sample Output
    1
   22
  333
 4444
55555   

Sample Input
8
Sample Output
       1
      22
     333
    4444
   55555
  666666
 7777777
88888888       


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
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("%d",k);
        }
        s--;
        k++;
        printf("\n");
    }
    return 0;
}