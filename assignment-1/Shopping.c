#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a;
    scanf("%d",&a);
    if(a>1000){
        printf("I will buy Punjabi\n");
        if(a>=1500){
            printf("I will buy new shoes\nAlisa will buy new shoes");
        }
    }else{
        printf("Bad luck!");
    }
    return 0;
}
