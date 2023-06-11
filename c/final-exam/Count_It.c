#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    char s[1001];
    fgets(s,1001,stdin);
    int cap=0,small=0,spa=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='A'&&s[i]<='Z'){
            cap++;
        }else if(s[i]>='a'&&s[i]<='z'){
            small++;
        }else if(s[i]==' '){
            spa++;
        }
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d",cap,small,spa);
    return 0;
}