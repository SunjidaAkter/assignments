/*
Question: Write a function named is_palindrome() which will receive a string as parameter from the main function and this function will return 1 if the string is palindrome, otherwise it will return 0. And with the help of this 1 or 0 print “Palindrome” or “Not Palindrome” in the main function.			Marks: 15



Sample Input
madam
Sample Output
Palindrome
Sample Input
abcd
Sample Output
Not Palindrome


*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int is_palindrome(char* s){
    int i=0,j=strlen(s)-1,flag=1;
    while(i<j){
        if(s[i]!=s[j]){
            flag=0; 
            break;           
        }
        i++;
        j--;
    }
    if(flag==1){
        return 1;
    }else if(flag==0){
        return 0;
    }
}
int main(){
    char s[101];
    scanf("%s",&s);
    if(is_palindrome(s)==1){
        printf("Palindrome");
    }else if(is_palindrome(s)==0){
        printf("Not Palindrome");
    }
    return 0;
}