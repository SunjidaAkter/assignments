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